#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	public:
	Weapon(const std::string& name);
	~Weapon();

	void setType(const std::string type);
	std::string getType() const;
	private:
	std::string type;
};
#endif
