#include "Data.hpp"
#include <iostream>

void * serialize(void)
{
    char *output = new char[20]; //8bytes (8char) + 4bytes(1 integer) + *bytes (8 char)
    std::string alpnum = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i = -1;

    srand(time(NULL));
    while (++i < 8)
        output[i] = alpnum[rand() % 62];
    i--;
    while (++i < 12)
        output[i] = rand() % 10;
    i--;
    while (++i < 20)
        output[i] = alpnum[rand() % 62];
    output[i] = '\0';
    i = -1;
    std::cout << "Before:\nS1: ";
    while (++i < 8)
        std::cout << output[i];
    std::cout << "\nn: " << static_cast<int>(output[8]) << std::endl; //used to convert between pointers to related classes
    i = 11;
    std::cout << "S2: ";
    while (++i < 20)
        std::cout << output[i] ;
    std::cout << "\n______________" << std::endl;
    return (reinterpret_cast<void*>(output)); // converts any type of pointer to any other type of pointer, 
                                                //even unrelated types. No checks are performed. It simply copies 
                                                //the binary data from one pointer to another.
}

Data * deserialize(void * raw)
{
    Data *data = new Data;
    char *input = reinterpret_cast<char *>(raw);
    int i = -1;

    while (++i < 8)
        data->s1 = data->s1 + input[i];
    data->n = input[8];
    i = 11;
    while (++i < 20)
        data->s2 = data->s2 + input[i];
    return (data);
}

int main()
{
    void *ser;
    Data *data;

    ser = serialize();
    std::cout << "Address: " << ser << std::endl;
    std::cout << "______________" << std::endl;
    data = deserialize(ser);
    std::cout << "After:\nS1: ";
    std::cout << data->s1 << std::endl;
    std::cout << "n: " << data->n << std::endl;
    std::cout << "S2: "<< data->s2 << std::endl;

    return (0);
}