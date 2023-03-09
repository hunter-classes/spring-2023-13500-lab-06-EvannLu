OBJECTS = funcs.o caesar.o vigenere.o decrypt.o

main: main.o $(OBJECTS)
	g++ -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -o tests tests.o $(OBJECTS)

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.cpp

vigenere.o: vigenere.cpp vigenere.h

decrypt.o: decrypt.cpp decrypt.h

funcs.o: funcs.cpp funcs.h

main.o: main.cpp funcs.h

tests.o: tests.cpp doctest.h funcs.h

clean:
	rm -f main tests main.o funcs.o tests.o test-ascii.o $(OBJECTS)
