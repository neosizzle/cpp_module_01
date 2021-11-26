#include <iostream>
#include <fstream>
#include "main.hpp"

std::string	read_file(int argc, char **argv)
{
	std::string content;

	if (argc != 4)
	{
		std::cout << "Usage : ./sed [FILENAME] [STRING TO BE REPLACED] [STRING TO REPLACE]\n";
		exit(1);
	}
	//open file and create input stream
	std::ifstream ifs(argv[1]);

	//file not found
	if (!ifs)
	{
		std::cout << "./sed Error : file not found\n";
		exit(1);
	}

	//assign takes two values, the start of the read and the end. once the iterater reaches the end,
	//the value will be equal to the default constructor
  	content.assign( (std::istreambuf_iterator<char>(ifs)), (std::istreambuf_iterator<char>()));
 	ifs.close();
	
	return content;
}

void	write_file(std::string content, std::string name)
{
	std::ofstream newFile(name + ".replace");

	newFile << content;
	newFile.close();
}

int	main(int argc, char **argv)
{
	std::string	content;
	std::string processed_content;
	std::string	s1;
	std::string	s2;

	content = read_file(argc, argv);
	s1 = argv[2];
	s2 = argv[3];
	processed_content = sed(content, s1, s2);
	write_file(processed_content, argv[1]);
	return 0;
}
