#include <iostream>
#include <string>

class Zombie {
	public:
		Zombie();
		~Zombie();
		void set_name(const std::string &name);
		void announce() const;
	private:
		std::string name;
};

		Zombie* newZombie(std::string name);
		void randomChump(std::string name);
