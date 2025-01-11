/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 10:00:33 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/11 10:00:33 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
	(void)argv;
	if (argc != 2)
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return 1;
	}

	ScalarConverter::convert(std::string(argv[1]));
	return 0;
}
