/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:54:14 by side-boe          #+#    #+#             */
/*   Updated: 2025/11/17 14:13:27 by side-boe         ###   ########.fr       */
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
	for (int i = 0; i <= 3; i++)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return;
		}
	}
	std::cout << "wrong value: please enter 'DEBUG', 'INFO', 'WARNING' or 'ERROR'" << std::endl;
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
