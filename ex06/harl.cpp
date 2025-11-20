/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:54:14 by side-boe          #+#    #+#             */
/*   Updated: 2025/11/17 14:22:51 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "harl.hpp"
Harl::Harl(){}

void Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[])() = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error,
	};
	int i = 0;
	for (;i <= 3; i++)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			break;
		}
	}
	if (i == 4)
	{
		std::cout << "wrong value: please enter 'DEBUG', 'INFO', 'WARNING' or 'ERROR'" << std::endl;
		return;
	}
	switch (i)
    {
        case 0:
            (this->*functions[0])();
            [[fallthrough]];
        case 1:
            (this->*functions[1])();
            [[fallthrough]];
        case 2:
            (this->*functions[2])();
            [[fallthrough]];
        case 3:
            (this->*functions[3])();
            break;

        default:
            break;
}		
}

void Harl::debug(void)
{
	std::cout << "Just like pointers, your direction matters more than your starting point." << std::endl;
}

void Harl::info(void)
{
	std::cout << "A segmentation fault only means you’re pushing boundaries." << std::endl;
}

void Harl::warning(void)
{
	std::cout << "A bug is not a failure — it's just a missing semicolon in your journey." << std::endl;
}

void Harl::error(void)
{
	std::cout << "In the syntax of life, keep your errors small and your learning infinite." << std::endl;
}
