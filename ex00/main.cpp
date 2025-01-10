#include "ScalarConverter.hpp"

void inputType2String(input2Type type) {
	switch (type) {
		case CHAR:
			std::cout << "char" << std::endl;
			break;
		case INT:
			std::cout << "int" << std::endl;
			break;
		case FLOAT:
			std::cout << "float" << std::endl;
			break;
		case DOUBLE:
			std::cout << "double" << std::endl;
			break;
		case INFF:
			std::cout << "inff" << std::endl;
			break;
		case INF:
			std::cout << "inf" << std::endl;
			break;
		case INVALID:
			std::cout << "invalid" << std::endl;
			break;
	}
}

int main(int argc, char **argv) {
	(void)argv;
	if (argc != 2)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return 1;
	}
	std::cout << "Input type: " ;
	inputType2String(getInput2Type(std::string(argv[1])));
	ScalarConverter::convert(std::string(argv[1]));

	return 0;
}
