// Motorcycle.cpp
#include "Vehicle.cpp"
#include <iostream>
using namespace std; 

// Write the Motorcycle class here
class Motorcycle : public Vehicle {
    private:
        bool sidecar;
        double fuelCapacity;
        double maxSpeed;
        double currentSpeed;
    public:
        void setSidecar(bool);
        bool getSidecar();
        void accelerate(double);

};

void Motorcycle::setSidecar(bool side)
{
    sidecar = side;
    if(sidecar == true) {
        cout << "This motorcycle has a side car" << endl;
    } else {
        cout << "This motorcycle does not have a side car" << endl;
    }
}

bool Motorcycle::getSidecar()
{
    return sidecar;
}

void Motorcycle::accelerate(double mph)
{
   if(currentSpeed + mph < maxSpeed)
      currentSpeed = currentSpeed + mph;
   else
      cout << "This motorcycle cannot go that fast." << endl; 
}