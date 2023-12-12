/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:27:38 by laugarci          #+#    #+#             */
/*   Updated: 2023/12/12 10:40:46 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

Zombie *zombieHorde( int N, std::string name )
{
	Zombie	*zombie;
	int		i;
	
	if (N < 1)
	{
		std::cout << "One or more zombies are necessary." << std::endl;
		return (NULL);
	}
	if (name.empty())
	{
		std::cout << "Name for zombies needed" << std::endl;
		return (NULL);
	}
	zombie = new Zombie[N];
	i = 0;
	while (i < N)
	{
		zombie[i].assignName(name);
		i++;
	}
	return (zombie);
}
