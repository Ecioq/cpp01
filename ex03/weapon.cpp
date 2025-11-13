/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: side-boe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 11:59:53 by side-boe          #+#    #+#             */
/*   Updated: 2025/11/13 11:59:53 by side-boe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "weapon.hpp"
Weapon::Weapon(const std::string& name)
: type(name) {}
Weapon::~Weapon(){};

void Weapon::setType(const std::string type)
{
	this->type = type;
}

std::string Weapon::getType()const
{
	return type;
}
