#ifndef __ZOMBIE__H__
#define __ZOMBIE__H__
#include <iostream>

class Zombie
{
	public:

		/*
		** Methods
		*/
		void	announce(void);

		/*
		** Constructors
		*/
		Zombie(std::string name);
		Zombie();
		~Zombie();

		/*
		** Setters
		*/
		void	set_name(std::string name);

	private:
		std::string _name;

};
Zombie* zombieHorde( int n, std::string name );

#endif  //!__ZOMBIE__H__