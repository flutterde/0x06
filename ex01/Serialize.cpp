/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:22:03 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/11 18:22:08 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"
#include <cstdint>

Serialize::Serialize(void)
{
}

Serialize::~Serialize(void)
{
}

Serialize::Serialize(const Serialize& obj)
{
	*this = obj;
}

Serialize& Serialize::operator=(const Serialize& obj)
{
	(void)obj;
	return (*this);
}

uintptr_t Serialize::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serialize::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
