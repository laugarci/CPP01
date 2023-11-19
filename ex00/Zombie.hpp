/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 13:19:04 by laugarci          #+#    #+#             */
/*   Updated: 2023/11/19 18:14:35 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string _name;
	
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void) const;
};

Zombie*			newZombie( std::string name );
void			randomChump( std::string name );

#endif
