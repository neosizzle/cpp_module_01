#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	//stack
	//wont work because all memory allocated is destroyed after return
	// Zombie zom(name);
	// zom.announce();
	// return &zom;

	//heap
	Zombie *zom;
	zom = new Zombie(name);
	return zom;
}