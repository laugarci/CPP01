/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 15:07:57 by laugarci          #+#    #+#             */
/*   Updated: 2023/12/14 12:48:14 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "sed.h"

bool	openFile(std::fstream &file, const char *name, std::ios_base::openmode mode)
{
	file.open(name, mode);
	if (!file.is_open())
	{
		std::cerr << "Error opening this file: " << name << std::endl;
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
	return (true);
}

std::string	replaceWords(std::string content, std::string toReplace, std::string newWord)
{
	std::string newContent;
	std::string	test;
	int pos;

	while (42)
	{
		pos = content.find(toReplace);
		if (pos < 0)
			break ;
		newContent += content.substr(0, pos);
		newContent += newWord;
		content.erase(0, pos + toReplace.length());
	}
	newContent += content;
	return (newContent);
}

int main(int ac, char **av)
{
	std::fstream	outfile;
	std::fstream	infile;
	std::string		outfileName;
	std::string		content;
	std::string		line;

	if (check_arguments(ac, av) == false)
		return (1);
	outfileName = ((std::string)av[1]).append(".replace");
	if (openFile(infile, av[1], std::ios_base::in) == false)
		return (1);
	if (openFile(outfile, outfileName.c_str(), std::ios_base::out) == false)
		return (1);
	while (std::getline(infile, line))
		content += line.append(1, '\n');
	outfile << replaceWords(content, av[2], av[3]);
}
