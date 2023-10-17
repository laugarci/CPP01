/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */

/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:43:11 by laugarci          #+#    #+#             */
//   Updated: 2023/10/17 17:53:21 by laugarci         ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *heapZombie = new Zombie("Zombie1");
	heapZombie->announce();
	
	Zombie stackZombie("Zombie2");
	stackZombie.announce();
	
	delete heapZombie;
	return (0);
}
