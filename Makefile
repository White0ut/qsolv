all:
	gcc src/main/c/qsolv.c src/test/c/test.c -lm -o test.out
	
	./test.out