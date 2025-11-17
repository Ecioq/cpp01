/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:02:43 by side-boe          #+#    #+#             */
/*   Updated: 2025/11/17 14:14:30 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	if (argc != 2)
	{
		std::cout << "please enter 'DEBUG', 'INFO', 'WARNING' or 'ERROR'" << std::endl;
		return 0;
	}
	harl.complain(std::string(argv[1]));
	return 0;
}
