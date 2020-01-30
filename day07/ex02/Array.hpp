#ifndef ARRAY_H
#define ARRAY_H

#include <exception>
#include <iostream>
#include <string>

template <typename T>
class Array {

    public:
        Array<T>() : _arr(NULL), _n(0) {
            return;
        }

        Array<T>(unsigned int n) {
            _n = n;
            _arr = new T[n];
        }

        Array<T>(Array const &copy) {
            *this = copy;
        }

        Array<T> &operator=(Array const &rhs) {
            int i = -1;

            this->_n = rhs._n;
            delete this->_arr;
            this->_arr = new T[this->_n];
            while (++i < (int)this->_n)
                this->_arr[i] = rhs._arr[i];

        }
        
        ~Array<T>() {
            return;
        }

        T &operator[](unsigned int n) {
            if (n >= this->_n)
                throw std::exception();
            return (this->_arr[n]);
        }

        unsigned int size() const {
            return (this->_n);
        }

    private:
        T*  _arr;
        unsigned int _n;

};

#endif