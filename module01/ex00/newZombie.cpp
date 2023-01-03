//
// Created by KDH on 2022/12/20.
//
#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	return new Zombie(name);
}