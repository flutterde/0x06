

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) {(void)other;}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other) {(void)other; return *this;}

ScalarConverter::~ScalarConverter() {}

void	convertToChar(std::string str, input2Type type, double d)
{
	if (type == CHAR)
		std::cout << "'" << str << "'" <<std::endl;
	else if (std::isprint(static_cast<char>(d)) && type != CHAR)
		std::cout << "'" << static_cast<char>(d) << "'" <<std::endl;
	else if (type != INFF && type != INF && type != INVALID \
		&& !std::isprint(static_cast<char>(d)) && (d < 255 && d > 0))
		std::cout << "Non displayble" << d << std::endl;
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

void	convertToFloat(std::string str, input2Type type, double d)
{
	(void)str;
	if (type != INFF && type != INF && type != INVALID && type != CHAR)
		std::cout << static_cast<float>(d) << (d - static_cast<int>(d) == 0 ? ".0" : "") << "f" << std::endl;
	else if (type == INFF || type == INF)
		std::cout << str << (type == INF ? "f" : "") << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

std::string trimLastF(std::string str)
{
	if (str[str.length() - 1] == 'f')
		str = str.substr(0, str.length() - 1);
	return (str);
}

void	convertToDouble(std::string str, input2Type type, double d)
{
	(void)str;
	if (type != INFF && type != INF && type != INVALID && type != CHAR)
		std::cout << d << (d - static_cast<int>(d) == 0 ? ".0" : "") << std::endl;
	else if (type == INFF || type == INF)
		std::cout << (type == INFF ? trimLastF(str) : str) << std::endl;
	else
		std::cout << "impossible" << std::endl;
}

void ScalarConverter::convert(std::string str)
{
	input2Type tp = getInput2Type(str);
	double value = std::strtod(str.c_str(), NULL );
	std::cout << "char: "; convertToChar(str, tp, value);
	std::cout << "int: "; convertToInt(str, tp, value);
	std::cout << "float: "; convertToFloat(str, tp, value);
	std::cout << "double: "; convertToDouble(str, tp, value);
}