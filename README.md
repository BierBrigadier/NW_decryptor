# NW_decryptor



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
