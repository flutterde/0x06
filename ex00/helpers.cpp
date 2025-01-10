#include "ScalarConverter.hpp"


int	isDigits(const std::string &str)
{
	for (size_t i = 0; i < str.length(); i++)
		if (!std::isdigit(str[i]))
			return (0);
	return (1);
}

int	isFloat(const char *str)
{
	int		i = 0;

	if (!str)
		return (-1);
	if ((str[i] == '-' || str[i] == '+') && str[i + 1])
		i++;
	while (str[i] && std::isdigit(str[i]))
		i++;
	if (str[i] == '.')
		i++;
	while (str[i] && std::isdigit(str[i]))
		i++;
	if (str[i] == 'f')
		i++;
	if (!str[i])
		return (1);
	return (0);
}

int	isDouble(const char *str)
{
	int		i = 0;

	if (!str)
		return (-1);
	if ((str[i] == '-' || str[i] == '+') && str[i + 1])
		i++;
	while (str[i] && std::isdigit(str[i]))
		i++;
	if (str[i] == '.')
		i++;
	while (str[i] && std::isdigit(str[i]))
		i++;
	if (!str[i])
		return (1);
	return (0);
}

int	isInt(const char *str)
{
	if (!str)
		return (-1);
	if ((str[0] == '-' || str[0] == '+') && str[1])
		return (isDigits(std::string(str + 1)));
	return (isDigits(std::string(str)));
}

int	isChar(const char *str)
{
	if (!str)
		return (-1);
	if (std::isalpha(str[0]) && str[1] == '\0')
		return (1);
	return (0);
}


int	isInff(std::string str)
{
	if (str == "inff" || str == "+inff" || str == "-inff" || str == "nanf")
		return (1);
	return (0);
}

int	isInf(std::string str)
{
	if (str == "inf" || str == "+inf" || str == "-inf" || str == "nan")
		return (1);
	return (0);
}

input2Type	getInput2Type(std::string str)
{
	if (isChar(str.c_str()))
		return (CHAR);
	else if (isInt(str.c_str()))
		return (INT);
	else if (isDouble(str.c_str()))
		return (DOUBLE);
	else if (isFloat(str.c_str()))
		return (FLOAT);
	else if (isInff(str))
		return (INFF);
	else if (isInf(str))
		return (INF);
	return (INVALID);
}
