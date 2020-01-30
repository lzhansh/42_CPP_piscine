#include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        Convert num(av[1]);
        std::cout << "char: ";
        try
        {
            int value = static_cast<int>(num);
            if (value >= 33 && value <= 126)
                std::cout << "'" << static_cast<char>(value) <<"'" << std::endl;
            else
                std::cout << "Non displayable" << std::endl;
        }
        catch(Convert::ConvertionException & e)
        {
            std::cerr << e.what() << std::endl;
        }
        catch(const std::exception &e)
        {
            std::cerr << "What?" << std::endl;
        }
        
        std::cout << "int: ";
        try
        {
            std::cout << static_cast<int>(num) << std::endl;
        }
        catch(Convert::ConvertionException & e)
        {
            std::cerr << e.what() << std::endl;
        }
        catch(const std::exception &e)
        {
            std::cerr << "What?" << std::endl;
        }

        std::cout << "float: ";
        try
        {
            std::cout << static_cast<float>(num) << "f" << std::endl;
        }
        catch(Convert::ConvertionException & e)
        {
            std::cerr << e.what() << std::endl;
        }
        catch(const std::exception &e)
        {
            std::cerr << "What?" << std::endl;
        }

        std::cout << "double: ";
        try
        {
            std::cout << static_cast<double>(num) << std::endl;
        }
        catch(Convert::ConvertionException & e)
        {
            std::cerr << e.what() << std::endl;
        }
        catch(const std::exception &e)
        {
            std::cerr << "What?" << std::endl;
        }
        return (0);
    }
}