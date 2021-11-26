#include "Karen.hpp"
#include <iostream>

/*
** Methods
*/
void	Karen::debug()
{
	std::cout << "[DEBUG] I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n\n";
}

void	Karen::info()
{
	std::cout << "[INFO] I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n\n";
}

void	Karen::warning()
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month. \n\n";
}

void	Karen::error()
{
	std::cout << "[ERROR] This is unacceptable, I want to speak to the manager now. \n\n";
}

void	Karen::filter(std::string level)
{
	int	level_int;
	std::string levels[] = {
		"ERROR",
		"WARNING",
		"INFO",
		"DEBUG"
	};

	level_int = -1;
	while (++level_int < 4)
		if (level == levels[level_int]) break ;
	
	switch (level_int)
	{
		case 3:
			Karen::debug();
			[[fallthrough]];
		case 2:
			Karen::info();
			[[fallthrough]];
		case 1:
			Karen::warning();
			[[fallthrough]];
		case 0:
			Karen::error();	
			break;
	  default:
	  	std::cout << "[ Probably complaining about insignificant problems ]\n";
		break;
	}
}
/*
** Constructors
*/
Karen::Karen()
{
}

Karen::~Karen()
{
	
}