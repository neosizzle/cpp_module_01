#ifndef __KAREN__H__
#define __KAREN__H__
#include <iostream>
class Karen
{
public:
	Karen();
	~Karen();
	void	complain(std::string level);
	
private:
	void	debug(void);
	void	info( void );
	void	warning( void );
	void	error( void );
};

#endif  //!__KAREN_H__