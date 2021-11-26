#include "Karen.hpp"
#include <iostream>

/*
** Methods
*/
void	Karen::debug()
{
	std::cout << "debug \n";
}

void	Karen::info()
{
	std::cout << "info \n";
}

void	Karen::warning()
{
	std::cout << "warning \n";
}

void	Karen::error()
{
	std::cout << "error \n";
}

typedef void (*complainFunc) (void);
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
		std::cout << "kek\n";
		return ;
	}
	complaint[i]();
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