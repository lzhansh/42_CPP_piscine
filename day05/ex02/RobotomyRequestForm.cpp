#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45) {
  return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : Form(copy.getName(), 72, 45) {
  *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs) {

  (void)rhs;
  return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() {
  return;
}

void RobotomyRequestForm::execute(Bureaucrat const &b) const {
  static int i = 0;

  if (this->getSign() == true && b.getGrade() <= this->getExG())
  {
    std::cout << "*Some Robot Noise*" <<std::endl;
    if (i % 2 == 0)
      std::cout << "<" << this->getName() << "> has been robotomized successfully" <<std::endl;
    else
      std::cout << "Robotomization is failed" <<std::endl;
    i++;
  }
  else if (this->getSign() == false)
    std::cout <<"<" << this->getName() << "> should be signed first." <<std::endl;
  else
    throw Form::GradeTooLowException();
  return ;
}

std::ostream &operator<<(std::ostream &o, RobotomyRequestForm const &rhs) {
  o << rhs.getName() << " RobotomyRequestForm, Sign grade " << rhs.getSiG() << "." << std::endl;
  return (o);
}
