#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP 
#include <iostream>
#include <stdint.h>
#include "Data.hpp"

class Serializer
{
    public:
        Serializer();
        Serializer(Serializer const &obj);
        Serializer &operator=(Serializer const &obj);
        ~Serializer();
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
};
#endif