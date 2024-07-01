#pragma once
#include <iostream>

class VehicleStart;


class BMW
{
public:
    void start() const
    {
        std::cout << "This is BMW \n";
    }

};


class VW
{
public:
    void start() const
    {
        std::cout << "This is VW \n";
    }

};

