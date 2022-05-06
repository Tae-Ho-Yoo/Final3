all:
	g++ -Wall TransparentStack.h TransparentStackTests.cpp -o ts-tests
	
run:
	ts-tests
	
try: all run
