#ifndef __WEAPON__H__
#define __WEAPON__H__
#include <iostream>

class Weapon
{
	public :
		Weapon(std::string type);
		~Weapon();

		void			setType(std::string type);
		const std::string		&getType(void);

	private :
		std::string	_type;

};


#endif  //!__WEAPON__H__