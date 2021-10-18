#include "Vehicle.h"

Vehicle::Vehicle(std::uint16_t numberOfSits, std::string color):
    NumberOfSits{numberOfSits},
    Color{color}
{
    std::cout<<"Explicit\n";
}

//COPY
Vehicle::Vehicle(const Vehicle& otherVehicle):
    NumberOfSits{otherVehicle.NumberOfSits},
    Color{otherVehicle.Color}
{
    std::cout<<"Copy\n";
}
//MOVE
Vehicle::Vehicle(Vehicle&& otherVehicle):
    NumberOfSits{otherVehicle.NumberOfSits},
    Color{otherVehicle.Color}
{

    std::cout<<"Move\n";
}



Vehicle& Vehicle::operator=(const Vehicle& otherVehicle)
{
    NumberOfSits = otherVehicle.NumberOfSits;
    Color = otherVehicle.Color;

    std::cout<<"operator=\n";
}

void Vehicle::SetNumberOfSits(std::uint16_t numberOfSits)
{
    NumberOfSits = numberOfSits;
}

std::uint16_t Vehicle::GetNumberOfSits() const
{
    //NumberOfSits++;
    return NumberOfSits;
}
