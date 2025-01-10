
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

enum input2Type
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	INFF,
	INF,
	INVALID
};

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &other);
		ScalarConverter &operator=(const ScalarConverter &other);
		~ScalarConverter();
	public:
		static void convert(std::string str);
};

input2Type	getInput2Type(std::string str);

#endif