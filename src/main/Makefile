cc = gcc
flags = -lm

all: main roots QSOLVE sqrt 
	$(cc) -o QuadSolver main.o roots.o QSOLVE.o sqrt.o $(flags)

main:
	gcc -c main.c 
roots:
	gcc -c roots.c	
QSOLVE:
	gcc -c QSOLVE.c
sqrt:
	gcc -c sqrt.c
clean:
	-rm main.o 
	-rm roots.o
	-rm QSOLVE.o
	-rm sqrt.o
	-rm QuadSolver
