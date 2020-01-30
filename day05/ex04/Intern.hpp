#ifndef Intern_H
#define Intern_H

#include "Bureaucrat.hpp"
#include "Form.hpp"

class Form;

class Intern {

    public:
        Intern();
        Intern(Intern const &copy);
        Intern &operator=(Intern const &rhs);
        ~Intern();

        Form *makeForm(std::string f, std::string b);

};

std::ostream &operator<<(std::ostream &o, Intern const &rhs);

#endif