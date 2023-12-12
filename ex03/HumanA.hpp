/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:13:32 by laugarci          #+#    #+#             */
/*   Updated: 2023/12/11 15:13:23 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	private:
		Weapon		*weapon;
		std::string	name;
	public:
		HumanA(std::string _name, Weapon &_weapon);
		~HumanA();
		void		attack(void);
};

#endif
