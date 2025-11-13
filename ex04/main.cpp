/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 14:53:03 by side-boe          #+#    #+#             */
/*   Updated: 2025/11/13 14:53:03 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "file.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	File f;
	if (argc != 4)
	{
	std::cout << "you have to input filename than the string you want to find and only after that the replace. if that is to difficult for you than do something else!" << std::endl;
	return 0;
	}
	f.setfile(argv[1]);
	f.setfind(argv[2]);
	f.setreplace(argv[3]);

}
