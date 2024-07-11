#include <iostream>
#include <string>


int main(int ac, char **av) {
    if (ac > 1)
	{
		for (int x = 1; x < ac; x++)
		{
			for (int y = 0; av[x][y]; y++)
				std::cout << (char)toupper(av[x][y]);
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return 0;
}