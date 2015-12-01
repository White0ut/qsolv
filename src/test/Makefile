cc = gcc

flags = -lm

all:testMock roots QSOLVE sqrtmock 
	$(cc) -o QuadSolverMockTest testMock.o roots.o MockQSOLVE.o sqrtmock.o $(flags)

testMock:
	gcc -c testMock.c 
roots:
	gcc -c ../main/roots.c	
QSOLVE:
	gcc -c ../main/MockQSOLVE.c
sqrtmock:
	gcc -c ../main/sqrtmock.c
clean:
	-rm testMock.o
	-rm roots.o
	-rm MockQSOLVE.o
	-rm sqrtmock.o
	-rm QuadSolverMockTest