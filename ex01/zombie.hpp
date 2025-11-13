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

	Zombie* zombieHorde( int N, std::string name);
