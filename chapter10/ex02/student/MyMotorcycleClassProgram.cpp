// This program uses the programmer-defined Motorcycle class. 
#include "Motorcycle.cpp"
#include <iostream>
using namespace std; 
int main()
{
   Motorcycle motorcycleOne;
   Motorcycle motorcycleTwo;

   bool sidecarStatus;

   motorcycleOne.setSidecar(true);
   motorcycleTwo.setSidecar(false);

   motorcycleOne.setMaxSpeed(90.0);
   motorcycleTwo.setMaxSpeed(85.0);
   motorcycleOne.setSpeed(65.0);
   motorcycleTwo.setSpeed(60.0);
   motorcycleOne.accelerate(30.0);
   motorcycleTwo.accelerate(20.0);

   cout << "The current speed of motorcycleOne is " << motorcycleOne.getSpeed() << endl;
   cout << "The current speed of motorcycleTwo is " << motorcycleTwo.getSpeed() << endl;

   sidecarStatus = motorcycleOne.getSidecar();
   if(sidecarStatus)
        cout << "This motorcycle has a side car" << endl;
    else
        cout << "This motorcycle does not have a side car" << endl;

   sidecarStatus = motorcycleTwo.getSidecar();
   if(sidecarStatus)
        cout << "This motorcycle has a side car" << endl;
    else
        cout << "This motorcycle does not have a side car" << endl;
    return 0;
}