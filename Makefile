all:
	gcc src/main/QSOLVE.c src/main/sqrtmock.c src/test/test.c -lm -o test.out
	
	./test.out

root:
	gcc src/main/sqrt.c -lm -o sqrt.out

	./sqrt.out