#ifndef RobotomyRequestForm_H
#define RobotomyRequestForm_H

#include "Bureaucrat.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form {

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(RobotomyRequestForm const &copy);
        RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
        virtual ~RobotomyRequestForm();

        void execute(Bureaucrat const &b) const;

};

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &rhs);

#endif