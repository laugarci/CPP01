/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 17:09:53 by laugarci          #+#    #+#             */
/*   Updated: 2023/12/12 14:49:37 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void) const;
	private:
		std::string _name;
};

Zombie			*newZombie( std::string name );
void			randomChump( std::string name );

#endif
