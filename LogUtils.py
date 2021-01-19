from datetime import datetime


def write_log(path, data):
    try:
        f = open(path, 'a')
        f.write('[' + datetime.now().strftime("%H:%M:%S") + '] ' + str(data) + '\n')
        f.close()
        return True
    except IOError:
        print(IOError)
    return False
