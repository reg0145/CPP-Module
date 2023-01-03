#include <iostream>
#include <sstream>
#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
	if (n < 1) {
		std::cout << "one or more zombies can be created!" << std::endl;
		return NULL;
	}
	Zombie* horde = new Zombie[n];
	for (int i = 0; i < n; i++) {
		horde[i].SetName(name);
	}
	return horde;
}