#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>

Base * generate(void)
{
    srand(time(NULL));
    int i = rand() % 3;

    if (i == 0)
        return (new A);
    else if (i == 1)
        return (new B);
    return (new C);
}

void identify_from_pointer( Base * p )
{
    if (dynamic_cast<A*>(p))
        std::cout <<"A"<<std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout <<"B"<<std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout <<"C"<<std::endl;
}

void identify_from_reference( Base & p )
{
    if (dynamic_cast<A*>(&p))
        std::cout <<"A"<<std::endl;
    else if (dynamic_cast<B*>(&p))
        std::cout <<"B"<<std::endl;
    else if (dynamic_cast<C*>(&p))
        std::cout <<"C"<<std::endl;
}


int main()
{
    Base *base = generate();

    identify_from_pointer(base);

    identify_from_reference(*base);

    return (0);
}