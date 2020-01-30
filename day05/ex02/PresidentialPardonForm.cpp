#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5) {
  return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : Form(copy.getName(), 25, 5) {
  *this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs) {

  (void)rhs;
  return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {
  return;
}

void PresidentialPardonForm::execute(Bureaucrat const &b) const {

  if (this->getSign() == true && b.getGrade() <= this->getExG())
  {
    std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" <<std::endl;
  }
  else if (this->getSign() == false)
    std::cout <<"<" << this->getName() << "> should be signed first." <<std::endl;
  else
    throw Form::GradeTooLowException();
  return ;
}

std::ostream &operator<<(std::ostream &o, PresidentialPardonForm const &rhs) {
  o << rhs.getName() << " PresidentialPardonForm, Sign grade " << rhs.getSiG() << "." << std::endl;
  return (o);
}
