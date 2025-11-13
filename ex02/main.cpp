/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 10:59:58 by side-boe          #+#    #+#             */
/*   Updated: 2025/11/13 10:59:58 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iostream>

void pointer(std::string* ptr);

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "the memory addres of the string variable " << &str << std::endl;
	std::cout << "the memory addres of stringPTR" << stringPTR << std::endl;
	std::cout << "the memory addres of stringREF" << &stringREF << std::endl;

	std::cout << "the value of the string variable " << str << std::endl;
	std::cout << "the value of stringPTR" << *stringPTR << std::endl;
	std::cout << "the valueof stringREF" << stringREF << std::endl;
}
