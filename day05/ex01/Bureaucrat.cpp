#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
  if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
  else if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
  else
    this->_grade = grade;
  return;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy) {
  *this = copy;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs) {
  this->_grade = rhs._grade;
  return (*this);
}

void Bureaucrat::operator+=(int const i) {
  if (this->_grade - i < 1)
    throw Bureaucrat::GradeTooHighException();
  else
    this->_grade = this->_grade - i;
}

void Bureaucrat::operator-=(int const i) {
  if (this->_grade + i > 150)
    throw Bureaucrat::GradeTooLowException();
  else
    this->_grade = this->_grade + i;
}

Bureaucrat::~Bureaucrat() {

}

std::string Bureaucrat::getName() const {
  return (this->_name);
}

int Bureaucrat::getGrade() const {
  return (this->_grade);
}

void Bureaucrat::signForm() {

}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs) {
  o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << "." << std::endl;
  return (o);
}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw() {
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const &copy) throw() {
  *this = copy;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw() {
}

Bureaucrat::GradeTooHighException &Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &rhs) throw() {
  (void)rhs;
  return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
  return ("Error: Grade too high");
}

Bureaucrat::GradeTooLowException::GradeTooLowException() throw() {

}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const &copy) throw() {
  *this = copy;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw() {

}

Bureaucrat::GradeTooLowException &Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &rhs) throw() {
  (void)rhs;
  return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
  return ("Error: Grade too low");
}
