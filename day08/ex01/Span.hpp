#ifndef SPAN_H
#define SPAN_H

#include <iostream>
#include <string>
#include <vector>

class Span {

    public:

        Span();
        Span(unsigned int N);
        Span(Span const &copy);
        Span &operator=(Span const &rhs);
        ~Span();

        void addNumber(int n);
        unsigned int shortestSpan();
        int longestSpan();

    private:

        unsigned int _N;
        std::vector<int> _arr;
};

#endif