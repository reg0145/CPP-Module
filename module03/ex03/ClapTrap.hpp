#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
	public:
		ClapTrap(const std::string &name);
		ClapTrap(const ClapTrap &ref);
		~ClapTrap();
		ClapTrap &operator=(const ClapTrap &ref);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

	protected:
		enum {
			HIT_POINT = 10,
			ENERGY = 10,
			DAMAGE = 0,
		};
		int mHitPoints;
		int mEnergy;
		int mDamage;
		std::string mName;

		ClapTrap();
};

#endif