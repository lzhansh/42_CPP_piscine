#include "Span.hpp"

Span::Span(unsigned int n) : _N(n) {
    _arr.reserve(n);
}

Span::Span(Span const &copy) {
    *this = copy;
}

Span &Span::operator=(Span const &rhs) {
    this->_N = rhs._N;
    _arr = rhs._arr;
    return (*this);
}

Span::~Span() {

}

void Span::addNumber(int num) {
    if (_arr.size() <= _N)
        _arr.push_back(num);
    else
        throw std::length_error("Array is full");
}

unsigned int Span::shortestSpan() {
    std::vector<int> tmp;
    int sh = INT_MAX;
    std::vector<int>::iterator ptr;

    tmp = _arr;
    sort(tmp.begin(), tmp.end());
    for (ptr = tmp.begin(); ptr + 1 < tmp.end(); ptr++)
    {
        if (sh > (*(ptr + 1) - *ptr))
            sh = *(ptr + 1) - *ptr;
    }
    return (sh);
}

int Span::longestSpan() {
    return (*std::max_element(_arr.begin(), _arr.end()) - 
        *std::min_element(_arr.begin(), _arr.end()));
}