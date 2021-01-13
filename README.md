# NW_decryptor

Running decryptor:
1. Navigate in cmd to the folder in which main.py is located.
2. Activate the virtual environment:
	venv\Scripts\activate
3. Run main.py


Installing decryptor:
1. Download Python 2.7.16 (2.7 does not work with pip!)
2. Download Visual C++ compiler for Python 2.7:
https://www.microsoft.com/en-us/download/details.aspx?id=44266
3. Donna setup:
Copy:
https://github.com/mattn/gntp-send/blob/master/include/msinttypes/stdint.h
to:
C:\Users\nw\AppData\Local\Programs\Common\Microsoft\Visual C++ for Python\9.0\VC\include

5. Activate venv:
venv\Scripts\activate

4. Install requirements.txt
pip install -r requirements.txt



Creating a standalone executable
In order to create a standalone executable, you will need to install Nuitka:
https://nuitka.net/

1. Navigate in cmd to the folder in which main.py is located.
2. Activate the virtual environment:
	venv\Scripts\activate
3. Install Nuitka:
	python -m pip install nuitka
4. Verify installation:
	python -m nuitka --version
5. Create executable (takes a few minutes):
	python -m nuitka --mingw64 --follow-imports main.py
	python -m nuitka --standalone --recurse-all --mingw64 main.py
6. Copy the configs folder in the same folder as the created executable.


Donna troubleshoot:
Copy:
https://github.com/mattn/gntp-send/blob/master/include/msinttypes/stdint.h
to:
C:\Users\nw\AppData\Local\Programs\Common\Microsoft\Visual C++ for Python\9.0\VC\include

Eerste: COa1JNLFTtIkqmUBdBvMQhwq/sNv6UuZ0Z4GJl98bwY=
OB: fw3wr42KGihNMzIqQ1befcTRrDEYM2dKhAXVaLITjyE=
