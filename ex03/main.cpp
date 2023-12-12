/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:39:19 by laugarci          #+#    #+#             */
/*   Updated: 2023/12/12 15:07:20 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("plastic maller");
		bob.attack();
	}
	{
		Weapon club = Weapon("spoon");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("hammer");
		jim.attack();
	}	
	return (0);
}
