/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 09:59:45 by side-boe          #+#    #+#             */
/*   Updated: 2025/11/13 10:08:01 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "zombie.hpp"

int main(void)
{
	Zombie* heapzombie = newZombie("heapzombie");
	heapzombie->announce();
	randomChump("stackzombie");
	std::cout << "calling destructor on heapzombie" << std::endl;
	delete heapzombie;
}
