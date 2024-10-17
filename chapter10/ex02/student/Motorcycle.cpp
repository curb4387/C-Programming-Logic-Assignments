// Motorcycle.cpp
#include "Vehicle.cpp"
#include <iostream>
using namespace std; 

// Write the Motorcycle class here
class Motorcycle : public Vehicle
{
    public:
        void accelerate(double);
        void setSidecar(bool);
        bool getSidecar();
    private:
        bool sidecar;
};