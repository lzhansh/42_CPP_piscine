#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137) {
  return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : Form(copy.getName(), 145, 137) {
  *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs) {

  (void)rhs;
  return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
  return;
}

void ShrubberyCreationForm::execute(Bureaucrat const &b) const {
  if (this->getSign() == true && b.getGrade() <= this->getExG())
  {
    std::string file = this->getName() + "_shrubbery";
    std::ofstream ofs(file);

    ofs << ""
            "      ______________$$$$$_____________" << std::endl <<
            "      __$$$$_______$$$___$$$$$________" <<std::endl<<
            "      _$$$$$$_____$$$___$$$$$$$_______" <<std::endl<<
            "      $$$_$$$$___$$$__$$$$____$_______" <<std::endl<<
            "      $____$$$$_$$$$_$$$______________" <<std::endl<<
            "      _______$$$$$$$$$$___$$$$$_______" <<std::endl<<
            "      ____$$$$$$$$$$$$_$$$$_$$$$$_____" <<std::endl<<
            "      ___$$$$$$$$$$$$$$$$$_____$$$____" <<std::endl<<
            "      __$$$__$$$$$$$$$$$$________$____" <<std::endl<<
            "      _$$___$$$$$$$$$$$$$$$$$_________" <<std::endl<<
            "      $$___$$$$_$$$_$$$__$$$$$________" <<std::endl<<
            "      $___$$$$___$$__$$$$___$$$_______" <<std::endl<<
            "      ____$$$_____$$___$$$____$$______" <<std::endl<<
            "      ____$$______$$$___$$$____$______" <<std::endl<<
            "      ____$$_______$$____$$$__________" <<std::endl<<
            "      ____$________$$$____$$__________" <<std::endl<<
            "      _____________$$$____$___________" <<std::endl<<
            "      _____________$$$________________" <<std::endl<<
            "      _____________$$$_________________" <<std::endl<<
            "      _____________$$$_________________" <<std::endl<<
            "      _____________$$$_________________" <<std::endl<<
            "      ____________$$$_________________" <<std::endl<<
            "      ___________$$$$__________________" <<std::endl<<
            "      _________$$$$$___________________" <<std::endl<<
            "      ______$$$$$$____________________ " <<std::endl;
    std::cout << "<" << this->getName() << "> was executed. Check the file <" << file << ">" <<std::endl;
  }
  else if (this->getSign() == false)
    std::cout <<"<" << this->getName() << "> should be signed first." <<std::endl;
  else
    throw Form::GradeTooLowException();
  return ;
}

std::ostream &operator<<(std::ostream &o, ShrubberyCreationForm const &rhs) {
  o << rhs.getName() << " ShrubberyCreationForm, Sign grade " << rhs.getSiG() << "." << std::endl;
  return (o);
}
