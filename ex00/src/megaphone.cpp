#include <cctype>
#include <iostream>
#include <string>

std::string	to_upper(const std::string& str)
{
	std::string result = str;

	for(size_t i = 0; i < result.length(); i++)
		result[i] = toupper(result[i]);
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for(int i = 1; i < argc; i++)
			std::cout << to_upper(argv[i]);
	std::cout << std::endl;
	return (0);
}
