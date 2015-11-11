all:
	gcc src/main/c/qsolv.c src/main/c/sqrtmock.c src/test/c/test.c -lm -o test.out
	
	./test.out

root:
	gcc src/main/c/sqrt.c -lm -o sqrt.out

	./sqrt.out