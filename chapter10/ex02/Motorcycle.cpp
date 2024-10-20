// Motorcycle.cpp
#include "Vehicle.cpp"
#include <iostream>
using namespace std; 
class Motorcycle : public Vehicle
{
   public: 
      void accelerate(double); 
      void setSideCar(bool);
      bool getSideCar();
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

void Motorcycle::setSideCar(bool status)
{
   sidecar = status;
}

bool Motorcycle::getSideCar()
{
   return sidecar;
}