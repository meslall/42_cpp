#include <algorithm>
#include <exception>

template<typename T>

typename T::iterator	easyfind( T &container, int goal )
{
	typename T::iterator	result = find(container.begin(), container.end(), goal);

	if (result == container.end())
		throw std::exception;
	return result;
}
