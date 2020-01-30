#include "Array.hpp"

int main()
{
    Array<int> arr(7);
    int i = -1;
    srand(time(NULL));

    try
    {
        while (++i < (int)arr.size())
            arr[i] = rand() % 50;
        i = -1;
        while (++i < (int)arr.size())
            std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
        std::cout << arr[9] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return(0);

}