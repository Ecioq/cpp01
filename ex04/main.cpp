/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:53:03 by side-boe          #+#    #+#             */
/*   Updated: 2025/11/16 13:26:51 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "file.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	File f;
	if (argc != 4)
	{
		std::cout << "Usage: ./program <filename> <find> <replace>" << std::endl;
		return 1;
	}
	
	f.setfile(argv[1]);
	f.setfind(argv[2]);
	f.setreplace(argv[3]);
	
	f.makeNewFile();
	std::string content = f.readFileToString();
	std::string result = f.replaceInString(content);
	
	std::cout << "Replacement done!" << std::endl;
	
	return 0;
}
