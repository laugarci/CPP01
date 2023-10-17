/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:27:38 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/17 18:45:02 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*zombie;
	int		i;
	
	zombie = new Zombie[N];
	i = 0;
	while (i < N)
	{
		zombie[i].assign_name(name);
		i++;
	}
	return (zombie);
}
