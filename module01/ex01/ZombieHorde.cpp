#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 0) {
		std::cout << "one or more zombies can be created!" << std::endl;
		return NULL;
	}
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		horde[i].SetName(name);
	}
	return horde;
}