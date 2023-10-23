/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:42:40 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/23 15:58:28 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main ()
{
    Harl harl;

    harl.complain("DEBUG");
//	harl.complain("INFO");
//	harl.complain("WARNING");
	harl.complain("ERROR");

    return (0);
}
