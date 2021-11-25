#include "Zombie.hpp"
#include <iostream>  

Zombie* zombieHorde( int n, std::string name )
{
	int		i;
	Zombie *horde;

	i = -1;
	horde = new Zombie[n];
	while(++i < n)
	{
		horde[i].set_name(name + std::to_string(i));
		horde[i].announce();
	}
	return horde;
}