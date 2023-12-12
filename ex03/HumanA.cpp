/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:43:26 by laugarci          #+#    #+#             */
/*   Updated: 2023/12/12 15:05:58 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"
# include "HumanA.hpp"

HumanA::~HumanA()
{

}

HumanA::HumanA(std::string name, Weapon &weapon)
{
	if (name.empty())
		name = "????";
	_name = name;
	_weapon = &weapon;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with " << _weapon->getType() << std::endl;
}
