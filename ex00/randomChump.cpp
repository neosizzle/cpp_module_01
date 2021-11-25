#include "Zombie.hpp"

void randomChump( std::string name )
{
	//stack
	Zombie zom(name);
	zom.announce();

	//heap
	// wont work because the pointed isnt returned for freeing
	// Zombie *zom;
	// zom = new Zombie(name);
	// zom->announce();
	// return zom;
}