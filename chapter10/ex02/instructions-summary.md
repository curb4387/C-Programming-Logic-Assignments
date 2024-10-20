## Your Tasks

In this lab, you create a derived class from a base class, and then use the derived class in a C++ program. The program should create two `Motorcycle` objects, and then set the Motorcycle’s speed, accelerate the Motorcycle object, and check its sidecar status. Use the Vehicle and Automobile classes that you worked with earlier in this chapter as a guide.

## Instructions

Open the file named _Motorcycle.cpp_. Create the Motorcycle class by deriving it from the Vehicle class. Use a public derivation

**Task 1**: Create the `Motorcycle` class by deriving it from the `Vehicle` class. Use a `public` derivation.

In the `Motorcycle` class, create a `private` attribute named `sidecar`. The `sidecar` attribute should be data type `bool`.

**Task 2**: Write a public set and get methods for the `sidecar` attribute.

**Task 3**: Write a `public` `accelerate()` method. This method overrides the `accelerate()` method inherited from the `Vehicle` class. Change the message in the `accelerate()` method so the following is displayed when the `Motorcycle` tries to accelerate beyond its maximum speed: **"This motorcycle cannot go that fast"**.

In the _MyMotorcycleClassProgram.cpp_, create two `Motorcycle` objects named `motorcycleOne` and `motorcycleTwo`. Set the `sidecar` value of `motorcycleOne` to `true` and the `sidecar` value of `motorcycleTwo` to `false`. Set `motorcycleOne`’s maximum speed to 90 and `motorcycleTwo`’s maximum speed to 85. Set `motorcycleOne`’s current speed to 65 and `motorcycleTwo`’s current speed to 60. Accelerate `motorcycleOne` by 30 mph, and accelerate `motorcycleTwo` by 20 mph. Print the current speed of `motorcycleOne` and `motorcycleTwo`.

**Task 4**: Determine if `motorcycleOne` and `motorcycleTwo` have sidecars. If yes, display the following: **"This motorcycle has a side car"**. If not, display the following: **"This motorcycle does not have a side car"**.

An example of the program is shown below:

```
This motorcycle cannot go that fast
The current speed of motorcycleOne is 65
The current speed of motorcycleTwo is 80
This motorcycle has a side car
This motorcycle does not have a side car
```