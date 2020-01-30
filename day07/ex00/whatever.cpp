#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T tmp;

    tmp = a;
    a = b;
    b = tmp;
}

template <typename T>
T max(T a, T b)
{
    T res;

    res = (a > b) ? a : b;
    return (res);
}

template <typename T>
T min(T a, T b)
{
    T res;

    res = (a < b) ? a : b;
    return (res);
}

int main()
{
    int i = 5, j = 7;
    std::cout << "i = " << i << "; j = " << j << std::endl;
    ::swap(i, j);
    std::cout << "i = " << i << "; j = " << j << std::endl;
    std::cout << "min(i,j) = " << ::min(i, j) << std::endl;
    std::cout << "max(i,j) = " << ::max(i, j) << std::endl;
    std::cout << std::endl;
    double a = 5.67, b = 9.23;
    std::cout << "a = " << a << "; b = " << b << std::endl;
    ::swap(a, b);
    std::cout << "a = " << a << "; b = " <<b << std::endl;
    std::cout << "min(a,b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a,b) = " << ::max(a, b) << std::endl;
    std::cout << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
}