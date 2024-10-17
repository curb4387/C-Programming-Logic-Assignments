// Motorcycle.cpp
#include "Vehicle.cpp"
#include <iostream>
using namespace std; 

// Write the Motorcycle class here
class Motorcycle: public Vehicle
{
    public:
        void accelerate(double);
        void setSidecar(bool);
        bool getSidecar();
    private:
        bool sidecar;
};

void Motorcycle::accelerate(double mph)
{
   if(getSpeed() + mph > getMaxSpeed())
      cout << "This motorcycle cannot go that fast" << endl;
   else
      setSpeed(getSpeed() + mph);
}

void Motorcycle::setSidecar(bool status)
{
    sidecar = status;
}

bool Motorcycle::getSidecar()
{
    return sidecar;
}