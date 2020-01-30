#ifndef EASYFIND_H
#define EASYFIND_H

#include <vector>
#include <iostream>
#include <exception>

template <typename T>
int easyfind(T &cont, int n)
{
    typename T::iterator it;

    it = std::find(cont.begin(), cont.end(), n);
    if (it == cont.end())
        throw std::logic_error("There is no such number");
    return (*it);
}

#endif