#include <iostream>

template <typename T>
void display(T &i)
{
    std::cout << i << std::endl;
}

template <typename T>
void iter(T *addr, size_t len, void (*func)(T &))
{
    int i = -1;

    while (++i < (int)len)
        (*func)(addr[i]);
}

int main()
{
    char str[] = "Hello there!";
    std::string words[] = {"Hey", "you", "YES", "you"};
    int arr[5] = {4, 1, 8, 2, 9};

    iter<char>(str, strlen(str), &display<char>);
    iter<std::string>(words, sizeof(words)/sizeof(words[0]), &display<std::string>);
    iter<int>(arr, sizeof(arr)/sizeof(arr[0]), &display<int>);
    return (0);
}