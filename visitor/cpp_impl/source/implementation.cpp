#include "car_operation.hpp"


    void VehicleStart::operator()(BMW const& bmw) const
    {
        bmw.start();
    }

    void VehicleStart::operator()(VW const& vw) const 
    {
        vw.start();
    }
