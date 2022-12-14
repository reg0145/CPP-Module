#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	public :
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void    SetName(std::string name);
		void    announce(void);

	private :
		std::string name;
};

Zombie* zombieHorde(int n, std::string name);

#endif
