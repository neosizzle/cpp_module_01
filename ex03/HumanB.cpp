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
	if ("" == _weapon->getType())
		std::cout << _name << "	Cant attack without a weapon" << "\n";
	else
		std::cout << _name << "  attacks with his " << _weapon->getType() << "\n";
}
