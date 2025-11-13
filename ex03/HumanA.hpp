#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "weapon.hpp"

class HumanA {
	public:
		HumanA(const std::string& name, Weapon& weapon);
		~HumanA();
		void attack() const;
	private:
			std::string name;
			Weapon& weapon;
};
#endif
