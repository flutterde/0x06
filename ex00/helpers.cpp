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
	if (str[i] == '-' || str[i] == '+')
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
	if (str[i] == '-' || str[i] == '+')
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
	if (str[0] == '-' || str[0] == '+')
		return (isDigits(std::string(str + 1)));
	return (isDigits(std::string(str)));
}

int	isChar(const char *str)
{
	if (!str)
		return (-1);
	if (str[0] == '\'')
		return (1);
	return (0);
}

