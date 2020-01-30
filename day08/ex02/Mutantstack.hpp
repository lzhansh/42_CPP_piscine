#ifndef MUTANTSTACK_H
#define MUTANTSTACK_H

#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <iterator>

template <typename T>
class Mutantstack : public std::stack<T> {

    public:
        Mutantstack() { }
        Mutantstack(Mutantstack const &copy) {*this = copy; }
        Mutantstack &operator=(Mutantstack const &rhs) {this->_v = rhs._v; return (*this);}
        ~Mutantstack() { }

        typedef typename std::vector<T>::iterator iterator;

        iterator begin() {return(_v.begin()); }
        iterator end()  {return(_v.end()); }
        void push(T val) {_v.push_back(val);}
        void pop() {_v.pop_back(); }
        T top() {return (*(_v.end() - 1)); }

    private:
        std::vector<T> _v;

};

#endif