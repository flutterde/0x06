/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 14:56:04 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/11 18:35:55 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void)
{
    int x = std::rand() % 3;
	if (!x)
		return (new A());
	else if (x == 1)
		return (new B());
    return (new C());
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return ;
	}
	catch(const std::exception& e) {(void)e;}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return ;
	}
	catch(const std::exception& e) {(void)e;}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return ;
	}
	catch(const std::exception& e) {(void)e;}
}

int	main()
{
	std::srand(std::time(NULL));
	Base *aa = generate();
	if (!aa)
		return (1);
	identify(aa);
	std::cout << " -------------------- " << std::endl;
	identify(*aa);
	delete aa;
	return (0);
}
