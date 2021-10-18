#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <cinttypes>

class Vehicle
{

private:

    std::uint16_t NumberOfSits{2};
    std::string Color{"None"};

public:

    Vehicle()
    {
        std::cout<<"default\n";
    }

    Vehicle(std::uint16_t numberOfSits, std::string color); //explicit

    Vehicle(const Vehicle& otherVehicle); //copy

    ~Vehicle()
    {
        std::cout<<"destroyed\n";
    }

    Vehicle(Vehicle&& otherVehicle);//move

    Vehicle& operator= (const Vehicle& otherVehicle);

    //methods
    void SetNumberOfSits(std::uint16_t numberOfSits);
    std::uint16_t GetNumberOfSits() const;
};

#endif // VEHICLE_H
