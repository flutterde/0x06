/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 10:33:51 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/11 13:20:26 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP
# include <iostream>

typedef struct s_data {
	int	x;
	int	y;
	int	z;
} Data;

class Serialize
{
	private:
		Serialize(void);
		Serialize(const Serialize& obj);
		Serialize&	operator=(const Serialize& obj);
		~Serialize();

	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif
