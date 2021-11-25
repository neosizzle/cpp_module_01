#include "Weapon.hpp"
#include <iostream>

/*
** Getters and setters
*/
void	Weapon::setType(std::string type)
{
	_type = type;
}

const std::string		&Weapon::getType()
{
	const std::string &typeref = _type;
	return typeref;
}

/*
** Constrctors
*/

Weapon::Weapon(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{
}