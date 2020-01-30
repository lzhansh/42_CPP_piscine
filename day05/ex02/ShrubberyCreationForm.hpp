#ifndef ShrubberyCreationForm_H
#define ShrubberyCreationForm_H

#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form {

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm const &copy);
        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
        ~ShrubberyCreationForm();

        void execute(Bureaucrat const &b) const;

};

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &rhs);

#endif