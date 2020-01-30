#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock() : _intern(NULL), _sign(NULL), _exec(NULL) {

  return;
}

OfficeBlock::OfficeBlock(OfficeBlock const &copy) {
  *this = copy;
}

OfficeBlock &OfficeBlock::operator=(OfficeBlock const &rhs) {
  (void)rhs;
  return (*this);
}

OfficeBlock::~OfficeBlock() {
  return;
}

void OfficeBlock::setIntern(Intern &intern) {
  this->_intern = &intern;
}

void OfficeBlock::setSigner(Bureaucrat &sign) {
  this->_sign = &sign;
}

void OfficeBlock::setExecutor(Bureaucrat &exec) {
  this->_exec = &exec;
}

void OfficeBlock::doBureaucracy(std::string f, std::string n) {
  Form *f1 = NULL;
  if (!this->_intern)
  {
    throw OfficeBlock::NoInternException();
    return;
  }
  else if (!this->_sign)
  {
    throw OfficeBlock::NoSignerException();
    return;
  }
  else if (!this->_exec)
  {
    throw OfficeBlock::NoExecutorException();
    return;
  }
  f1 = this->_intern->makeForm(f, n);
  if (this->_sign->getGrade() > f1->getSiG())
  {
    delete f1;
    throw OfficeBlock::GradeTooLowException();
    return;
  }
  f1->beSigned(*this->_sign);
  if (this->_exec->getGrade() > f1->getExG())
  {
    delete f1;
    throw OfficeBlock::GradeTooLowException();
    return;
  }
  this->_exec->executeForm(*f1);

  delete f1;
  return;
}

OfficeBlock::NoInternException::NoInternException() throw() {

}

OfficeBlock::NoInternException::NoInternException(NoInternException const &copy) throw() {
  *this = copy;
}

OfficeBlock::NoInternException::~NoInternException() throw() {

}

OfficeBlock::NoInternException &OfficeBlock::NoInternException::operator=(NoInternException const &rhs) throw() {
  (void)rhs;
  return (*this);
}

const char* OfficeBlock::NoInternException::what() const throw() {
  return ("Office Block Error: No Intern");
}

OfficeBlock::NoSignerException::NoSignerException() throw() {

}

OfficeBlock::NoSignerException::NoSignerException( NoSignerException const &copy) throw() {
  *this = copy;
}

OfficeBlock::NoSignerException::~NoSignerException() throw() {

}

OfficeBlock::NoSignerException &OfficeBlock::NoSignerException::operator=(NoSignerException const &rhs) throw() {
  (void)rhs;
  return (*this);
}

const char* OfficeBlock:: NoSignerException::what() const throw() {
  return ("Office Block Error: No Signer");
}

OfficeBlock::NoExecutorException::NoExecutorException() throw() {

}

OfficeBlock::NoExecutorException::NoExecutorException(NoExecutorException const &copy) throw() {
  *this = copy;
}

OfficeBlock::NoExecutorException::~NoExecutorException() throw() {

}

OfficeBlock::NoExecutorException &OfficeBlock::NoExecutorException::operator=(NoExecutorException const &rhs) throw() {
  (void)rhs;
  return (*this);
}

const char* OfficeBlock::NoExecutorException::what() const throw() {
  return ("Office Block Error: No Executor");
}

OfficeBlock::GradeTooLowException::GradeTooLowException() throw() {

}

OfficeBlock::GradeTooLowException::GradeTooLowException(GradeTooLowException const &copy) throw() {
  *this = copy;
}

OfficeBlock::GradeTooLowException::~GradeTooLowException() throw() {

}

OfficeBlock::GradeTooLowException &OfficeBlock::GradeTooLowException::operator=(GradeTooLowException const &rhs) throw() {
  (void)rhs;
  return (*this);
}

const char* OfficeBlock::GradeTooLowException::what() const throw() {
  return ("Office Block Error: Grade too low");
}
