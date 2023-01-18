#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	int			i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < argc)
    	{
			std::string input(argv[i]);
			std::transform(input.begin(), input.end(), input.begin(), ::toupper);
    		std::cout << input;
			i++;
		}
		std::cout << std::endl;
	}
    return (0); 
}