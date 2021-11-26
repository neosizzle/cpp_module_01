#include "Karen.hpp"
#include <iostream>

/*
** Methods
*/
void	Karen::debug()
{
	std::cout << "[DEBUG] I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void	Karen::info()
{
	std::cout << "[INFO] I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}

void	Karen::warning()
{
	std::cout << "[WARNING] I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month. \n";
}

void	Karen::error()
{
	std::cout << "[ERROR] This is unacceptable, I want to speak to the manager now. \n";
}

void	Karen::complain(std::string level)
{
	int	i;

	std::string levels[4] = {
		"debug",
		"info",
		"warning",
		"error",
	};

	void	(Karen::*complaint[])( void ) = {
		&Karen::debug,
		&Karen::info,
		&Karen::warning,
		&Karen::error
	};

	i = -1;
	while (++i < 4)
	{
		if(level == levels[i])
		break ;
	}
	if (i == 4)
	{
		std::cout << "???\n";
		return ;
	}
	(this->*complaint[i])();
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