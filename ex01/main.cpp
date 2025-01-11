/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 10:02:31 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/11 13:23:16 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int	main()
{
	{		
		Data dt = {4, 5, 12};
		std::cout << "dt X: " << dt.x << " dt Y: " << dt.y << " dt Z: " << dt.z << std::endl;
		uintptr_t ser = Serialize::serialize(&dt);
		std::cout << "Ser: " << ser << std::endl;
		Data *nn = Serialize::deserialize(ser);
		std::cout << "X: " << nn->x << " Y: " << nn->y << " Z: " << nn->z << std::endl;
	}
		std::cout << " ----------------------------------------- " << std::endl;
	{
		Data *dt2 = new Data;
		dt2->x = -15;
		dt2->y = -1545;
		dt2->z = 753;
		std::cout << "dt2 X: " << dt2->x << " dt2 Y: " << dt2->y << " dt Z: " << dt2->z << std::endl;
		uintptr_t ser = Serialize::serialize(dt2);
		std::cout << "Ser: " << ser << std::endl;
		Data *nn = Serialize::deserialize(ser);
		std::cout << "X: " << nn->x << " Y: " << nn->y << " Z: " << nn->z << std::endl;
		delete dt2;
	}
	return (0);
}
