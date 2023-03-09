#include <iostream>
#include <string>
#include "iter.hpp"

int main(void) {
	{
		int	array[] = {1, 2, 3, 4, 5};
		iter(array, 5, print_elem);
	}
	
	{
		std::string array[] = {"Hello", "World", "!"};
		iter(array, 3, print_elem);
	}
	return (0);
}
