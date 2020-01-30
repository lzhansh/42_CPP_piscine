#include "Form.hpp"

Form::Form(std::string name, int sg, int exg) : _name(name), _sg(sg), _exg(exg), _signed(false) {
  if (sg < 1 || exg < 1)
    throw Form::GradeTooHighException();
  else if (exg > 150 || exg > 150)
    throw Form::GradeTooLowException();
  return;
}

Form::Form(Form const &copy) : _sg(copy._sg), _exg(copy._exg) {
  *this = copy;
}

Form &Form::operator=(Form const &rhs) {

  this->_signed = rhs._signed;
  return (*this);
}

Form::~Form() {
  return;
}

std::string Form::getName() const {
  return (this->_name);
}

int Form::getSiG() const {
  return (this->_sg);
}

int Form::getExG() const {
  return (this->_exg);
}

bool Form::getSign() const {
  return (this->_signed);
}

void Form::beSigned(Bureaucrat &obj) {
  if (obj.getGrade() > this->_sg || obj.getGrade() > this->_exg)
  {
    std::cout << obj.getName() << " cannot sign the <" << this->_name
              << "> because his grade is " << obj.getGrade() << " and required grade is ["
              << this->_sg << "]." << std::endl;
    throw GradeTooLowException();
  }
  else if (obj.getGrade() < 0)
  {
    throw GradeTooHighException();
  }
  else
  {
    std::cout << obj.getName() << " signs the <" << this->_name << ">." << std::endl;
    obj.signForm();
    this->_signed = 1;
  }
  return;
}

std::ostream &operator<<(std::ostream &o, Form const &rhs) {
  o << rhs.getName() << " Form, Sign grade " << rhs.getSiG() << "." << std::endl;
  return (o);
}

Form::GradeTooHighException::GradeTooHighException() throw() {
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const &copy) throw() {
  *this = copy;
}

Form::GradeTooHighException::~GradeTooHighException() throw() {
}

Form::GradeTooHighException &Form::GradeTooHighException::operator=(GradeTooHighException const &rhs) throw() {
  (void)rhs;
  return (*this);
}

const char* Form::GradeTooHighException::what() const throw() {
  return ("Error: Grade too high");
}

Form::GradeTooLowException::GradeTooLowException() throw() {

}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const &copy) throw() {
  *this = copy;
}

Form::GradeTooLowException::~GradeTooLowException() throw() {

}

Form::GradeTooLowException &Form::GradeTooLowException::operator=(GradeTooLowException const &rhs) throw() {
  (void)rhs;
  return (*this);
}

const char* Form::GradeTooLowException::what() const throw() {
  return ("Error: Grade too low");
}
