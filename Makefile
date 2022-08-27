all: square

square: main.o unit_test.o input_output.o math_funct.o
	g++ main.o unit_test.o input_output.o math_funct.o

main.o:    main.cpp
	g++ -c main.cpp

math_funct.o: math_funct.cpp
	g++ -c    math_funct.cpp

unit_test.o: unit_test.cpp
	g++ -c   unit_test.cpp

input_output.o: input_output.cpp
	g++ -c      input_output.cpp

clean:
	rm -rf *.o square
