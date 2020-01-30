#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    Bureaucrat b("Bora", 5);
    Form f1("Disclosure", 3, 4);

    // std::cout << std::endl;

    try
    {
        f1.beSigned(b);
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

    try
    {
        Form f2("Prenap", 7, 5);
        f2.beSigned(b);
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
}