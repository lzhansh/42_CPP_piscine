#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <string>
#include <exception>
#include <iostream>
#include <sstream>
#include <fstream>
#include "Form.hpp"

class Form;

class Bureaucrat {

      public:
        Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat const &copy);
        Bureaucrat &operator=(Bureaucrat const &rhs);
        virtual ~Bureaucrat();

        std::string getName() const;
        int getGrade() const;
        void operator+=(int const i);
        void operator-=(int const i);

        void signForm();
        void executeForm(Form const &form);

        class GradeTooHighException : public std::exception {

              public:
                GradeTooHighException() throw();
                GradeTooHighException(GradeTooHighException const &copy) throw();
                GradeTooHighException &operator=(GradeTooHighException const &rhs) throw();
                virtual ~GradeTooHighException() throw();
                virtual const char* what() const throw();
        };

        class GradeTooLowException : public std::exception {

              public:
                GradeTooLowException() throw();
                GradeTooLowException(GradeTooLowException const &copy) throw();
                GradeTooLowException &operator=(GradeTooLowException const &rhs) throw();
                virtual ~GradeTooLowException() throw();
                virtual const char* what() const throw();
        };

      private:
        std::string const _name;
        int _grade;

};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
