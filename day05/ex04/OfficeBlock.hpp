#ifndef OfficeBlock_H
#define OfficeBlock_H

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"

class OfficeBlock {
    public:
        OfficeBlock();
        OfficeBlock(OfficeBlock const &copy);
        OfficeBlock &operator=(OfficeBlock const &rhs);
        virtual ~OfficeBlock();

        void setIntern(Intern &intern);
        void setSigner(Bureaucrat &sign);
        void setExecutor(Bureaucrat &exec);

        void  doBureaucracy(std::string f, std::string n);

        class NoInternException : public std::exception {

              public:
                NoInternException() throw();
                NoInternException(NoInternException const &copy) throw();
                NoInternException &operator=(NoInternException const &rhs) throw();
                virtual ~NoInternException() throw();
                virtual const char* what() const throw();
        };

        class NoSignerException : public std::exception {

              public:
                NoSignerException() throw();
                NoSignerException(NoSignerException const &copy) throw();
                NoSignerException &operator=(NoSignerException const &rhs) throw();
                virtual ~NoSignerException() throw();
                virtual const char* what() const throw();
        };

        class NoExecutorException : public std::exception {

              public:
                NoExecutorException() throw();
                NoExecutorException(NoExecutorException const &copy) throw();
                NoExecutorException &operator=(NoExecutorException const &rhs) throw();
                virtual ~NoExecutorException() throw();
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

          Intern      *_intern;
          Bureaucrat  *_sign;
          Bureaucrat  *_exec;

};

// std::ostream &operator<<(std::ostream &o, OfficeBlock const &rhs);

#endif