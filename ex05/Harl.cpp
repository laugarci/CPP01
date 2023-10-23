/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:42:50 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/23 16:03:14 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void	Harl::debug(void)
{
	std::cout << BOLD"[ DEBUG ]"RESET << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!" << std::endl;

}

void	Harl::info(void)
{
	std::cout << BOLD"[ INFO ]"RESET << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << BOLD"[ WARNING ]"RESET << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << BOLD"[ ERROR ]"RESET << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{	
	int i;
	std::string options[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcArray[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	i = 0;
	while (i < 4)
	{
		if (options[i] == level)
		{
			(this->*funcArray[i])();
			break ;
		}
		i++;
	}
	if (i == 4)
		std::cout << BOLD"[ No message ]"RESET << std::endl;
}
