all: ComplexNumbers.cpp
	g++ ComplexNumbers.cpp Complex_Numbers.cpp -o cp
clean:
	rm cp
