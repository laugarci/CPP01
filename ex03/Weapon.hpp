/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:56:22 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/18 14:53:17 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include	<string>

class Weapon
{
	private:
		std::string type;
	
	public:
		Weapon( std::string type );
		~Weapon( void );
		std::string	const	getType( void ) const;
		void				setType( std::string type );
};

#endif
