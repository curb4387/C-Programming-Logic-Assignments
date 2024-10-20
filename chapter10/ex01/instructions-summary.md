## Your Tasks

In this lab, you create a programmer-defined class and then use it in a C++ program. The program should create two `Rectangle` objects and find their area and perimeter. Use the `Circle` class that you worked with in _Exercise 10-1_ as a guide.

## Instructions

Open the class file _RectangleImp.cpp_.

In the `Rectangle` class, create two private attributes named `length` and `width`. Both `length` and `width` should be data type `double`.

**Task 1**: Write public set and get methods to set and get the values for `length`.

**Task 2**: Write public set and get methods to set and get the values for `width`.

**Task 3**: Write a public `calculateArea()` method and a public `calculatePerimeter()` method to calculate and return the area of the rectangle and the perimeter of the rectangle.

Open the _MyRectangleClassProgram.cpp_, create two `Rectangle` objects named `rectangle1` and `rectangle2` using the default constructor as you saw in _MyEmployeeClassProgram.cpp_.

Set the `length` of `rectangle1` to **10.0** and the `width` to **5.0**. Set the `length` of `rectangle2` to **7.0** and the `width` to **3.0**
. Print the value of rectangle1’s perimeter and area, and then print the value of rectangle2’s perimeter and area.

An example of the program is shown below:

```
Perimeter of rectangle1 is 30
Area of rectangle1 is 50
Perimeter of rectangle2 is 20
Area of rectangle2 is 21
```