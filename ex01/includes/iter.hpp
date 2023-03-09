#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *array, size_t const len, void (*func)(T)) {
	for (size_t i = 0; i < len; i++)
		func(array[i]);
}

template<typename T>
void	print_elem(T elem) {
	std::cout << elem << std::endl;
}

#endif