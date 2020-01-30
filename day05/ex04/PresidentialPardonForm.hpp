#ifndef PresidentialPardonForm_H
#define PresidentialPardonForm_H

#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form {

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm const &copy);
        PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
        virtual ~PresidentialPardonForm();

        void execute(Bureaucrat const &b) const;

};

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &rhs);

#endif