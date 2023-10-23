/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:42:40 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/23 16:19:51 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (int ac, char **av)
{
    Harl harl;
	int i;

	i = 0;
	if (ac == 2)
	{
		while(av[1][i])
		{
			av[1][i] = std::toupper(av[1][i]);
			i++;
		}
		harl.complain(av[1]);
	}
	else
		std::cout << BOLD"[ I neeed an option ]"RESET << std::endl;
    return (0);
}
