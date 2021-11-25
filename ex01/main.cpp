#include <iostream>
#include "Zombie.hpp"


int	main()
{
	int		n;
	int		temp;
	Zombie *horde;

	n = 10;
	std::cout << "from zombiehorde\n";
	horde = zombieHorde(n, "andy");
	std::cout << "\nfrom main\n";
	temp = -1;
	while (++temp < n)
		horde[temp].announce();

	delete [] horde;

	std::cout << "\n";
	n = 10;
	std::cout << "from zombiehorde\n";
	horde = zombieHorde(n, "more");
	std::cout << "\nfrom main\n";
	temp = -1;
	while (++temp < n)
		horde[temp].announce();

	delete [] horde;
}
