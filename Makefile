all: main test
	
main:
	cd src/main && make

test:
	cd src/test && make