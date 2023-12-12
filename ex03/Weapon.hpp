/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:56:22 by laugarci          #+#    #+#             */
/*   Updated: 2023/12/11 15:11:58 by laugarci         ###   ########.fr       */
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
		std::string	const	getType( void ) const;
		void				setType( std::string type );
};

#endif
