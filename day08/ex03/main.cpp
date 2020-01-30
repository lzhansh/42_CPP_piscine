#include "Mindopen.hpp"
#include <iostream>
#include <fstream>

void mindopen(char *f)
{
    std::ifstream fd(f);
    std::vector<Mindopen> inst;

    if (fd.is_open())
    {
        char c;
        std::vector<char> word;
        word.push_back('>');
        word.push_back('<');
        word.push_back('+');
        word.push_back('-');
        word.push_back('.');
        word.push_back(',');
        word.push_back('[');
        word.push_back(']');
        while (fd.get(c))
            if (std::find(word.begin(), word.end(), c) != word.end())
            {
                Mindopen *mind = new Mindopen(c);
                inst.push_back(*mind);
            }
        fd.close();

        std::vector<Mindopen>::iterator	it;
		std::vector<Mindopen>::iterator	ite = inst.end();

        std::vector<char> brainfuck(4096, 0);
		std::vector<char>::iterator	ptr = brainfuck.begin();
		try
		{
            for (it = inst.begin(); it != ite ; it++)
                it->execute(ptr, it, ite);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    else
        throw std::runtime_error("no file found");
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        try
        {
            mindopen(av[1]);
        }
        catch (std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    else
        std::cout <<"Usage: ./a.out filename" << std::endl;
    return (0);
}