/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:07:57 by laugarci          #+#    #+#             */
/*   Updated: 2023/12/13 15:59:04 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "sed.h"

bool	openFile(std::fstream &file, const char *name, std::ios_base::openmode mode)
{
	file.open(name, mode);
	if (file.is_open() == false)
	{
		std::cerr << "Error opening file" << std::endl;
		return (false);
	}
	return (true);
}

bool	check_arguments(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Usage: ./Sed <filename> <s1> <s2>" << std::endl;
		return (false);
	}
	if (!av[1] || !av[2] || !av[3])
	{
		std::cerr << "Invalid arguments." << std::endl;
		return (false);
	}
}

int main(int ac, char **av)
{
	std::fstream	outfile;
	std::string		outfileName;

	if (check_arguments(ac, av))
		return (1);
	if (ac != 4)
	{
		std::cout << "Usage: ./Sed <filename> <s1> <s2>" << std::endl;
		return (1);
	}
	outfileName = (std::string(av[1]) + ".replace").c_str();
	if (openFile(av[1], av[1], std::ios_base::in))
		return (1);
	if (openFile(outfile, outfileName, std::ios_base::out))
		return (1);
}
