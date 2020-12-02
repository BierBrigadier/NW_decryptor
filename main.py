import ConfigParser
import base64
import json
from binascii import unhexlify, hexlify
from Crypto.Cipher import AES

import CONSTS
import Helpers
import CryptoUtils
import LogUtils
from termcolor import colored
# from Crypto.Cipher import Salsa20

if __name__ == '__main__':

    # Read configuration file
    config = ConfigParser.ConfigParser()
    try:
        config.read("configs/configuration.txt")
        active_ransomware = config.get("Parameters", "active_ransomware")
        decryption_start = config.get("Parameters", "decryption_start")
        delete_ransom_files = config.get("Parameters", "delete_ransom_files")
        key_path = config.get("Parameters", "key_path")
        log_file = config.get("Parameters", "log_file")
        LogUtils.write_log(log_file, "Decryptor start.")
        LogUtils.write_log(log_file, "Configuration read successful.")

        # Read ransomware specific details
        config.read("configs/" + active_ransomware)
        extension = config.get(active_ransomware, "Extension")
        methodology = config.get(active_ransomware, "Methodology").split(', ')
        LogUtils.write_log(log_file, "Decrypting files with extension " + extension)
        LogUtils.write_log(log_file, "Methodology: " + str(methodology))
        print(methodology)

        f = r"C:\Users\nw\Desktop\REvil\Office.xml.65ls2s"
        error_files = []
        # TODO: Loop over each file, then do:

        # Execute tasks:
        for method in methodology:
            LogUtils.write_log(log_file, method + " start.")
            print(method + " start")
            # If method fails, log it and skip file
            status_code = Helpers.determine_method(active_ransomware, f, method, log_file)
            if not status_code:
                error_files.append(f)
                LogUtils.write_log(log_file, "ERROR: " + method + " in file " + f)
                break

            # Write method status complete
            LogUtils.write_log(log_file, str(method) + " completed.")
            print(method + " completed")
        # If there are any files not decrypted:
        if len(error_files) > 0:
            print(colored("Error decrypting file(s):", 'red'))
            print(error_files)

    # Catch config exceptions:
    except ConfigParser.NoSectionError as e:
        print(colored("Could not read configuration files!", 'red'))
        exit(0)
