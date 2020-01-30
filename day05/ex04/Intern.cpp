#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
  return;
}

Intern::Intern(Intern const &copy) {
  *this = copy;
}

Intern &Intern::operator=(Intern const &rhs) {
  (void)rhs;
  return (*this);
}

Intern::~Intern() {
  return;
}

Form *Intern::makeForm(std::string f, std::string n) {
  if (f == "Shrubbery Creation" || f == "shrubbery creation")
  {
    std::cout << "Intern creates <" << f << ">" <<std::endl;
    return (new ShrubberyCreationForm(n));
  }
  else if (f == "Robotomy Request" || f == "robotomy request")
  {
    std::cout << "Intern creates <" << f << ">" <<std::endl;
    return (new RobotomyRequestForm(n));
  }
  else if (f == "Presidential Pardon" || f == "presidential pardon")
  {
    std::cout << "Intern creates <" << f << ">" <<std::endl;
    return (new PresidentialPardonForm(n));
  }
  else
  {
    std::cout << "Intern creates <" << f << "> Form targeter on <" << n << " (Unsigned)" << std::endl;
    return (new Form(n, 130, 50));
  }
  return (NULL);
}