import ConfigParser
import os.path
import sys
import Helpers
import LogUtils
import CONSTS
from termcolor import *
import colorama

if __name__ == '__main__':
    colorama.init()
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

        # Override decryption start
        if len(sys.argv) > 1:
            decryption_start = sys.argv[1]
            cprint("Overriding decryption start to: " + decryption_start, 'green')
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
        success_counter = 0
        successful = False

        cprint("Decryptor start", 'green')
        # Loop over each encrypted file and decrypt according to methodology:
        for dirpath, dirnames, filenames in os.walk(decryption_start):
            for filename in [f for f in filenames if f.endswith(extension)]:
                if not dirpath.__contains__("$Recycle.Bin"):
                    f = os.path.join(dirpath, filename)
                    # Escape 255 path limit in Windows:
                    f = "\\\\?\\%s" % f
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

                            LogUtils.write_log(log_file, "ERROR: " + method + " in file " + f)
                            successful = False
                            break

                    # Write event logs if successful:
                    if successful:
                        cprint("Decrypted " + f[4:], 'white')
                        success_counter += 1
                        LogUtils.write_log(log_file, "Decryption of " + str(f) + " successful")
                        if delete_ransom_files == 'True':
                            if os.path.exists(f):
                                os.remove(f)
                        successful = False

        # Print statistics and write to logs:
        LogUtils.write_log(log_file, "Decrypted " + str(success_counter) + " files!")
        cprint("Decrypted " + str(success_counter) + " files!", 'green')
        if len(error_files) > 0:
            LogUtils.write_log(log_file, "The following files are not decrypted: " + str(error_files))
            cprint("Error decrypting file(s):", 'red')
            print(error_files)

    # Catch config exceptions:
    except ConfigParser.NoSectionError as e:
        cprint("Could not read configuration files!", 'red')
        print(e)
        exit(0)
