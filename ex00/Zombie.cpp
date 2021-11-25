#include <iostream>
#include "Zombie.hpp"

/*
** Methods
*/
void	Zombie::announce()
{
	std::cout << _name << "  BraiiiiiiinnnzzzZ...\n";
}

/*
** Constructors
*/
Zombie::Zombie(std::string name)
{
	_name = name;
}
Zombie::~Zombie()
{
	std::cout << _name << " Destroyed.\n";
}