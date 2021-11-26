#include <iostream>
#include "main.hpp"

std::string	sed(std::string content, std::string s1, std::string s2)
{
	std::string result;
	std::string left;
	std::string right;
	int	pos;
	int	s2len;
	int	s1len;

	result = content;
	s1len = s1.length();
	s2len = s2.length();
	pos = content.find(s1, 0);
	while (pos > -1)
	{
		left = content.substr(0, pos);
		right = content.substr(pos + s1len, content.length());//make it safe

		left += s2;
		left += right;
		content = left;
		pos += s2len;
		pos = content.find(s1, pos);
	}

	return (content);
}
