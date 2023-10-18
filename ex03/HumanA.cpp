/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:43:26 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/18 15:35:29 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanA.hpp"

HumanA::~HumanA()
{

}

HumanA::HumanA(std::string _name, Weapon &_weapon)
{
	name = _name;
	weapon = &_weapon;
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with " << weapon->getType() << std::endl;
}
