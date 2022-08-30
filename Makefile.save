all: square

square: main.o math_funct.o input_output.o unit_test.o
	g++ main.o math_funct.o input_output.o unit_test.o

main.o: main.cpp
	g++ -c main.cpp

math_funct.o: math_funct.cpp
	g++ -c math_funct.cpp

input_output.o: input_output.cpp
	g++ -c input_output.cpp

unit_test.o: unit_test.cpp
	g++ -c unit_test.cpp

clean:
	rm -rf *.o
