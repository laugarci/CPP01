/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:37:53 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/18 15:30:41 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

class HumanB
{
	public:
		HumanB(std::string _name);
		~HumanB();
		void		attack(void);
		void		setWeapon(Weapon &_weapon);

	private:
		Weapon			*weapon;
		std::string		name;
	//	bool			has_weapon;
};

#endif
