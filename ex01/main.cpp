/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:25:36 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/17 18:44:50 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"

int main()
{
	int	N;
	int i;
	Zombie *zombie;

	std::string name = "Zombie";
	N = 5;
	zombie =  zombieHorde(N, name);
	i = 0;
	while (i < N)
	{
		zombie[i].announce();
		i++;
	}

	delete[] zombie;
	return (0);
}
