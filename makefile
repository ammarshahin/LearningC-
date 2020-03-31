all: Build

Build:
	@echo Start Compiling
	g++ HelloProgram.c++ -o app.exe


git:
	git add .
	git commit -a -m "Quick Save"

clean: 
	@echo Start Cleaning
	del *.exe