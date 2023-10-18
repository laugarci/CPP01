/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:46:34 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/18 17:57:08 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include <fstream>  
#include <string>

int main(int ac, char **av)
{
	if (ac != 4)
		return(1);

	std::string line;
	std::ifstream infile(av[1], std::ifstream::in);
	std::ofstream outfile("testing.txt");
	
	if (infile && outfile)
	{	
		while (std::getline(infile, line))
			outfile << line << std::endl;
		std::cout << "done" << std::endl;
	}	
	infile.close();
	outfile.close();
	return (0);
}
