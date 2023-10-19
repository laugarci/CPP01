/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:46:34 by laugarci          #+#    #+#             */
/*   Updated: 2023/10/19 11:45:27 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include <fstream>  
#include <string>

void replace_words(std::string& str, const std::string& to_replace, const std::string& new_word)
{
	size_t check = str.find(to_replace);	
	if (check != std::string::npos)
	{
		while (check != std::string::npos)
		{
			str.erase(check, to_replace.length());
			check = str.find(to_replace);
		}
	}
	else
	{
	    std::cout << to_replace << " was not found in the text" << std::endl;
		return ;
	}
}

int main(int ac, char **av)
{
	if (ac != 4)
		return 1;
	std::string line;
	std::ifstream infile(av[1]);
	std::string to_replace = av[2];
	std::string new_word = av[3];
	
	if (infile.is_open())
	{
		std::string file_content((std::istreambuf_iterator<char>(infile)), std::istreambuf_iterator<char>());
		infile.close();
		replace_words(file_content, to_replace, new_word);
	}
	else
	{
		std::cout << "Error: No se pudo abrir el archivo." << std::endl;
		return (1);
	}
	return (0);
}

