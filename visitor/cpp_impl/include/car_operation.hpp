#pragma once 

#include "cars.hpp"



class VehicleStart
{
public:
    void operator()(BMW const& bmw) const;

    void operator()(VW const& vw) const ;
    
};