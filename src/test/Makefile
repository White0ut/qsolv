cc = gcc

flags = -lm

all: runUnitTestNoMock runUnitTestMock runFuncTest

runUnitTestNoMock:UnitTestNoMock
	./QuadSolverNoMockTest > ~/Qsolve/qsolv/src/test/TestLogs/UnitTestNoMockTestlog.txt

runUnitTestMock:UnitTestMockSqrt
	./QuadSolverMockTest > ~/Qsolve/qsolv/src/test/TestLogs/UnitTestMockSqrtTestlog.txt

runFuncTest:FunctionalTest
	./QuadSolver < input.txt > output.txt
	-diff -u output.txt correctOutput.txt > ~/Qsolve/qsolv/src/test/TestLogs/FunctionalTestTestlog.txt


UnitTestNoMock:UnitTest roots QSOLVE sqrt 
	$(cc) -o QuadSolverNoMockTest UnitTest.o roots.o QSOLVE.o sqrt.o $(flags)

UnitTestMockSqrt:testMock roots MockQSOLVE sqrtmock 
	$(cc) -o QuadSolverMockTest testMock.o roots.o MockQSOLVE.o sqrtmock.o $(flags)	

FunctionalTest:	main roots QSOLVE sqrt 
	$(cc) -o QuadSolver main.o roots.o QSOLVE.o sqrt.o $(flags)



main:
	gcc -c ../main/main.c 	
testMock:
	gcc -c testMock.c
UnitTest:
	gcc -c UnitTest.c 
roots:
	gcc -c ../main/roots.c
QSOLVE:
	gcc -c ../main/QSOLVE.c		
MockQSOLVE:
	gcc -c ../main/MockQSOLVE.c
sqrt:
	gcc -c ../main/sqrt.c	
sqrtmock:
	gcc -c ../main/sqrtmock.c
clean:
	-rm main.o
	-rm testMock.o
	-rm UnitTest.o
	-rm roots.o
	-rm QSOLVE.o
	-rm MockQSOLVE.o
	-rm sqrt.o
	-rm sqrtmock.o
	-rm QuadSolverMockTest
	-rm QuadSolverNoMockTest