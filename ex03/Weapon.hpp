/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:56:22 by laugarci          #+#    #+#             */
/*   Updated: 2023/12/13 11:37:40 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include	<string>

class Weapon
{
	private:
		std::string _type;	
	public:
		Weapon( std::string type );
		~Weapon( void );
		const std::string& getType() const;
		void	setType( std::string type );
};

#endif
