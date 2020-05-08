//inline function
#include <iostream>
#include <iomanip>
#include <cmath>
#include "functions.h"
using namespace std;


int main () {
  //Define 2 Circle objects
    Circle circle1, circle2;

  //Call setRadius function for each circle
    circle1.setRadius(1);
    circle2.setRadius(2);

  //Call calcArea for each function and display returned result
    cout << "The area of circle1 is " << circle1.calcArea() << endl;
    cout << "The area of circle2 is " << circle2.calcArea() << endl;

  return 0;
}
