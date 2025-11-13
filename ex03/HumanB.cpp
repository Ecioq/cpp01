/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 12:49:04 by side-boe          #+#    #+#             */
/*   Updated: 2025/11/13 13:34:14 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "HumanB.hpp"

HumanB::HumanB(const std::string& name)
	: name(name), weapon(0){};
HumanB::~HumanB() {};

void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack() const
{	
	if (weapon)
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}
