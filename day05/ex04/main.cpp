#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{
    Intern      idiotOne;
    Bureaucrat  hermes = Bureaucrat("Hermes Conrad", 37);
    Bureaucrat  bob = Bureaucrat("Bobby Bobson", 123);
    OfficeBlock ob;

    ob.setIntern(idiotOne);
    ob.setSigner(bob);
    ob.setExecutor(hermes);

    try
    {
        ob.doBureaucracy("mutant pig termination", "Pigley");
    }
    catch (OfficeBlock::NoInternException & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (OfficeBlock::NoSignerException & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (OfficeBlock::NoExecutorException & e)
    {
        std::cout << e.what() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}