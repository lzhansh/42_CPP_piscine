#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b("Bora", 5);
    std::cout << b;
    b += 1;
    std::cout << b;
    b -= 3;
    std::cout << b;

    std::cout << std::endl;

    try
    {
        Bureaucrat c("Test", 151);
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat d("Test2", 0);
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}