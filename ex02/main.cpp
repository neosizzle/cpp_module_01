#include <iostream>

int main()
{
	std::string str;
	std::string	*stringPTR;
	
	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "address of ptr : " << stringPTR << "\n";
	std::cout << "address of ref : " << &stringREF << "\n";

	std::cout << "value of ptr : " << *stringPTR << "\n";
	std::cout << "value of ref : " << stringREF << "\n";
}