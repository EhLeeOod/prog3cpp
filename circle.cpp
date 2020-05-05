//inline function
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

// Circle class declaration
class Circle
{ private:
    double radius;

  public:

  //getter function AKA accessor
    // void setRadius(double r)
    // { radius = r; }

  //setRadius prototype
    void setRadius(double);

  //setter function AKA mutator
    // double calcArea()
    // { return 3.14 * pow(radius, 2); }

    // calcArea prototype
    double calcArea();
};

  //function implementation section
    void Circle::setRadius(double r)
    {
      radius = r;
    }

    double Circle::calcArea()
    {
      return 3.14 * pow(radius, 2);
    }

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
