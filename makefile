run: program
	./program
program:program.c
	gcc program.c -o program
build:program
