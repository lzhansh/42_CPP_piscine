#include "Convert.hpp"

Convert::Convert() {

}

Convert::Convert(std::string input) : _input(input) {
    return;
}

Convert::Convert(Convert const &copy) {
    *this = copy;
    return;
}

Convert &Convert::operator=(Convert const &rhs) {
    this->_input = rhs._input;
    return (*this);
}

Convert::~Convert() {

}

Convert::operator char() const {
    int num = 0;

    try
    {
        num = std::stoi(this->_input);
    }
    catch(const std::exception& e)
    {
        throw ConvertionException();
    }
    return (static_cast<char>(num));    
}

Convert::operator int() const {
    int num = 0;

    try
    {
        num = std::stoi(this->_input);
    }
    catch(const std::exception& e)
    {
        throw ConvertionException();
    }
    return (num);    
}

Convert::operator float() const {
    float num = 0.0;

    try
    {
        num = std::stof(this->_input);
    }
    catch(const std::exception& e)
    {
        throw ConvertionException();
    }
    return (num);    
}

Convert::operator double() const {
    float num = 0.0;

    try
    {
        num = std::stof(this->_input);
    }
    catch(const std::exception& e)
    {
        throw ConvertionException();
    }
    return (num);    
}

Convert::ConvertionException::ConvertionException() throw() {

}

Convert::ConvertionException::ConvertionException(ConvertionException const &copy) throw() {
    *this = copy;
    return;
}

Convert::ConvertionException::~ConvertionException() throw() {

}

Convert::ConvertionException &Convert::ConvertionException::operator=(ConvertionException const &rhs) {
    (void)rhs;
    return (*this);
}

const char* Convert::ConvertionException::what() const throw() {
    return ("impossible");
}

