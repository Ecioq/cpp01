/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 09:48:17 by side-boe          #+#    #+#             */
/*   Updated: 2025/11/13 10:10:05 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie()
{
	std::cout << name << " has been destroyed" << std::endl;
}

void Zombie::set_name(const std::string &name)
{
	this->name = name;
}

Zombie* newZombie(std::string name)
{
	Zombie* heapzombie = new Zombie;
	heapzombie->set_name(name);	
	return heapzombie;
}

void Zombie::announce() const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
