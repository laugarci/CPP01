/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:09:42 by laugarci          #+#    #+#             */
/*   Updated: 2023/12/14 14:24:49 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *heapZombie = newZombie("Zombie1");
	heapZombie->announce();
	delete heapZombie;
	
	randomChump("Zombie2");
	return (0);
}
