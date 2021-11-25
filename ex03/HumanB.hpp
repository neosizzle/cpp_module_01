#ifndef __HUMANB__H__
#define __HUMANB__H__
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public :
		HumanB(std::string name);
		~HumanB();

		void	attack();
		void	setWeapon(Weapon &weapon);

	private:
		std::string	_name;
		Weapon	*_weapon;

};


#endif  //!__HUMANB__H__