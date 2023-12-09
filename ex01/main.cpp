/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:25:36 by laugarci          #+#    #+#             */
/*   Updated: 2023/12/09 18:06:50 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int main(void)
{
	int	N;
	int i;
	Zombie *zombie;

	std::string name = "";
	N = 1;
	zombie = zombieHorde(N, name);
	if (zombie == NULL)
		return (1);
	i = 0;
	while (i < N)
 	{
		zombie[i].announce();
		i++;
	}
	delete[] zombie;
	return (0);
}
