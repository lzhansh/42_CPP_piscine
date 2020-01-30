#ifndef MINDOPEN_H
#define MINDOPEN_H

#include <vector>
#include <iostream>
#include <iterator>

class Mindopen {

    public:
        Mindopen() { }
        Mindopen(char c) : _c(c) { };
        Mindopen(Mindopen const &copy) { *this = copy; }
        Mindopen &operator=(Mindopen const &rhs) { _c = rhs._c; return (*this); }
        ~Mindopen() { }

        char getCh() {return (_c); }
        void execute(std::vector<char>::iterator &i, 
                    std::vector<Mindopen>::iterator &it, 
                    std::vector<Mindopen>::iterator &iter) {
                
            int 	brackets = 1;
            switch (_c) {
                case '>':	i++;
                            break;
                case '<':	i--;
                            break;
                case '+':	(*i)++;
                            break;
                case '-':	(*i)--;
                            break;
                case '.':	std::cout << *i;
                            break;
                case ',':	*i = getchar();
                            break;
                case '[':	if (*i == 0)
                            {
                                while (brackets != 0 && it != iter)
                                {
                                    it++;
                                    if (it->getCh() == '[')
                                        brackets++;
                                    if (it->getCh() == ']')
                                        brackets--;
                                }
                                if (it == iter)
                                    throw std::logic_error("no matching ]");
                            }
                            break;
                case ']':	if (*i != 0)
                            {
                                while (brackets != 0 && it != iter)
                                {
                                    it--;
                                    if (it->getCh() == ']')
                                        brackets++;
                                    if (it->getCh() == '[')
                                        brackets--;
                                }
                                if (it == iter)
                                    throw std::logic_error("no matching [");
                            }
                            break;
                default:	break;
	}
            
        }

    private:
        char _c;

};

#endif