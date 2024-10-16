// Motorcycle.cpp
#include "Vehicle.cpp"
#include <iostream>
using namespace std; 

// Write the Motorcycle class here
class Motorcycle: public Vehicle
{
    public:
        void setSidecar(bool);
        bool getSidecar();
        void accelerate(double);
    private:
        bool sidecar;
        double fuelCapacity;
        double maxSpeed;
        double currentSpeed;
};

void Motorcycle::setSidecar(bool side)
{
    sidecar = side;
}

bool Motorcycle::getSidecar()
{
    if(sidecar == true) {
        cout << "This motorcycle has a side car" << endl;
    } else {
        cout << "This motorcycle does not have a side car" << endl;
    }
    return sidecar;
}

void Motorcycle::accelerate(double mph)
{
   if(getSpeed() + mph < getMaxSpeed())
      currentSpeed = getSpeed() + mph;
   else
      cout << "This motorcycle cannot go that fast." << endl; 
}