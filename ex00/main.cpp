#include <iostream>
#include "Zombie.hpp"

int	main()
{
	Zombie *zom;

	zom = newZombie("heap");
	zom->announce();
	delete zom;

	randomChump("stack");
}
