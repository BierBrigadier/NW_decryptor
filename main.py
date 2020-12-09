import ConfigParser
import os.path
import Helpers
import LogUtils
import CONSTS
from termcolor import colored


if __name__ == '__main__':

    # Read configuration file:
    config = ConfigParser.ConfigParser()
    try:
        # Read decryptor options:
        config.read("configs/configuration.txt")
        active_ransomware = config.get("Parameters", "active_ransomware")
        decryption_start = config.get("Parameters", "decryption_start")
        delete_ransom_files = config.get("Parameters", "delete_ransom_files")
        CONSTS.key_path = config.get("Parameters", "key_path")
        log_file = config.get("Parameters", "log_file")

        # Read ransomware specific details:
        config.read("configs/" + active_ransomware)
        extension = config.get(active_ransomware, "Extension")
        methodology = config.get(active_ransomware, "Methodology").split(', ')

        # Write events to log file:
        LogUtils.write_log(log_file, "Decryptor start.")
        LogUtils.write_log(log_file, "Configuration read successful.")
        LogUtils.write_log(log_file, "Decrypting files with extension " + extension)
        LogUtils.write_log(log_file, "Methodology: " + str(methodology))

        error_files = []
        successful = False

        print(colored("Decryptor start", 'green'))
        # Loop over each encrypted file and decrypt according to methodology:
        for dirpath, dirnames, filenames in os.walk(decryption_start):
            for filename in [f for f in filenames if f.endswith(extension)]:
                if not dirpath.__contains__("$Recycle.Bin"):
                    f = os.path.join(dirpath, filename)
                    f = r"C:\filesss\merged lockbit files\nwcrypter\hmd-ad-licentie.csv.lockbit"
                    # Execute tasks:
                    for method in methodology:
                        LogUtils.write_log(log_file, method + " start.")
                        # If method fails, log it and skip file
                        success = Helpers.determine_method(active_ransomware, f, method, log_file)
                        if success:
                            # Write method status complete
                            LogUtils.write_log(log_file, str(method) + " completed.")
                            successful = True
                        else:
                            # Error handling:
                            error_files.append(f)
                            LogUtils.write_log(log_file, "ERROR: " + method + " in file " + f)
                            successful = False
                            break

                    # Write event logs if successful:
                    if successful:
                        print(colored("Decrypted " + f, 'white'))
                        LogUtils.write_log(log_file, "Decryption of " + str(f) + " successful")
                        successful = False

        # If there are any files not decrypted write event logs:
        if len(error_files) > 0:
            LogUtils.write_log(log_file, "The following files are not decrypted: " + str(error_files))
            print(colored("Error decrypting file(s):", 'red'))
            print(error_files)
        else:
            LogUtils.write_log(log_file, "Decryption completed!")
            print(colored("\nDecryption completed!", 'green'))

    # Catch config exceptions:
    except ConfigParser.NoSectionError as e:
        print(colored("Could not read configuration files!", 'red'))
        print(e)
        exit(0)
