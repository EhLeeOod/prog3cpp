#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Rectangle
{
  private:
    double length;
    double width;

  public:
    void setLength(double);
    void setWidth(double);
    double getLength();
    double getWidth();
    double calcArea();
};

void Rectangle::setLength(double l)
{
  if (l >= 0.0)
    length = l;
  else
  {
    length = 1.0;
    cout << "Invalid length. Using default value of 1.0" << endl;
  }
}

void Rectangle::setWidth(double w)
{
  if (w >= 0.0)
    width = w;
  else
  {
    width = 1.0;
    cout << "Invalid width. Using default value of 1.0" << endl;
  }
}

// double Rectangle::
