#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

/*
** Constructors
*/
HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{

}

/*
** Methods
*/
void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << _name << "  attacks with his " << _weapon->getType() << "\n";
}
