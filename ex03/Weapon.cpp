/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:57:05 by laugarci          #+#    #+#             */
/*   Updated: 2023/12/12 15:07:18 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

Weapon::~Weapon()
{
}

Weapon::Weapon(std::string type)
{
	if (type.empty())
		type = "????";
	_type = type;
}

const std::string	Weapon::getType() const
{
	return (_type);
}

void		Weapon::setType(std::string type)
{
	if (type.empty())
		type = "???";
	_type = type;
}
