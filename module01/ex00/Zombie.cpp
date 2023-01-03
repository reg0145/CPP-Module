//
// Created by KDH on 2022/12/20.
//

#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

Zombie::~Zombie()
{
	std::cout << std::setw(6) << std::left << this->name << " : died!" << std::endl;
}

void Zombie::announce()
{
	std::cout << std::setw(6) << std::left << this->name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

