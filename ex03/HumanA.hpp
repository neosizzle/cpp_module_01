#ifndef __HUMANA__H__
#define __HUMANA__H__
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public :
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		void	attack();

	private:
		std::string	_name;
		Weapon	&_weapon;

};


#endif  //!__HUMANA__H__