#ifndef CONVERT_H
#define CONVERT_H

#include <string>
#include <exception>
#include <iostream>

class Convert {

    public:
        Convert();
        Convert(std::string input);
        Convert(Convert const &copy);
        Convert &operator=(Convert const &rhs);
        virtual ~Convert();

        class ConvertionException : public std::exception {

            public:
                ConvertionException() throw();
                ConvertionException(ConvertionException const &copy) throw();
                ConvertionException &operator=(ConvertionException const &copy);
                ~ConvertionException() throw();
                virtual const char* what() const throw();
        };

        operator char() const;
        operator int() const;
        operator float() const;
        operator double() const;

    private:
        std::string _input;
};

#endif