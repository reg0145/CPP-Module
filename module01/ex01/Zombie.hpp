#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private :
		std::string name;

	public :
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void    SetName(std::string name);
		void    announce(void);
};

#endif
