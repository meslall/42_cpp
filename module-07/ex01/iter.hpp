#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <cstdlib>

template<typename T>
void	iter(T *array, int arraySize, void (*fct_to_execute)(const T &))
{
	for (int i = 0; i < arraySize; i++)
		fct_to_execute(array[i]);
}

#endif