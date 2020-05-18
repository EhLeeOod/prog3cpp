#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include <cmath>

using namespace std;

class Circle
{ private:
    double radius;

  public:
    Circle(); // constructor, which is still a public member function
    void setRadius(double);

  //getter function AKA accessor
    // void setRadius(double r)
    // { radius = r; }

  //setRadius prototype
  //  void setRadius(double);

  //setter function AKA mutator
    // double calcArea()
    // { return 3.14 * pow(radius, 2); }

    // calcArea prototype
    double calcArea();
};

  //function implementation section
    Circle::Circle()
    {
      cout << "Hello, I am a circle. My area is: " << endl;
    }
    void Circle::setRadius(double r)
    {
      radius = r;
    }

    double Circle::calcArea()
    {
      return 3.14 * pow(radius, 2);
    }

class Demo
    {
    public:
      Demo();
      Demo(double param)
      {
        paramValue = param;
        cout << "This is a Demo constructor with one parameter. My parameter value is " << paramValue << "." << endl;
      };

    private:
      double paramValue;

    };

    Demo::Demo()
    {
      cout << "This is a Demo constructor without any parameters." << endl;
    };



#endif
