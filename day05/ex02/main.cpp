#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat b("Bora", 5);
    ShrubberyCreationForm f1("home");

    try
    {
        f1.execute(b);
        f1.beSigned(b);
        f1.execute(b);
    }
    catch (Form::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    try
    {
        ShrubberyCreationForm f2("42");
        Bureaucrat c("Sara", 150);
        f2.beSigned(c);
    }
    catch (Form::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    RobotomyRequestForm f3("rob");
    f3.beSigned(b);
    f3.execute(b);
    f3.execute(b);
    std::cout << std::endl;
    PresidentialPardonForm f4("white house");
    f4.beSigned(b);
    f4.execute(b);
}