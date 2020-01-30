#ifndef FORM_H
#define FORM_H

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
    public:
        Form();
        Form(std::string name, int sg, int exg);
        Form(Form const &copy);
        Form &operator=(Form const &rhs);
        virtual ~Form();

        std::string getName() const;
        int getSiG() const;
        int getExG() const;
        bool getSign() const;

        void beSigned(Bureaucrat &obj);
        virtual void execute(Bureaucrat const &executor) const;

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
        int const _sg;
        int const _exg;
        bool _signed;
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif