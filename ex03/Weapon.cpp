/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:57:05 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/18 14:54:16 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

Weapon::~Weapon()
{
}

Weapon::Weapon(std::string _type)
{
	type = _type;
}

const std::string	Weapon::getType() const
{
	return (type);
}

void		Weapon::setType(std::string _type)
{
	type = _type;
}
