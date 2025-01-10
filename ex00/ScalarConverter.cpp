

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {(void)other;}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {(void)other; return *this;}

ScalarConverter::~ScalarConverter() {}

void	convertToChar(std::string str, input2Type type, double d)
{
	if (type == CHAR)
		std::cout << "'" << str << "'" <<std::endl;
	else if (std::isprint(d) && type != CHAR)
		std::cout << "'" << static_cast<char>(d) << "'" <<std::endl;
	else if (type != INFF && type != INF && type != INVALID && !std::isprint(d))
		std::cout << "Non displayble" << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void	convertToInt(std::string str, input2Type type, double d)
{
	(void)str;
	if (type != INFF && type != INF && type != INVALID && type != CHAR)
		std::cout << static_cast<int>(d) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void ScalarConverter::convert(std::string str)
{
	input2Type tp = getInput2Type(str);
	double value = std::strtod(str.c_str(), NULL );
	std::cout << "char: "; convertToChar(str, tp, value);
	std::cout << "int: "; convertToInt(str, tp, value);

}