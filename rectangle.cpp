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

double Rectangle::getLength()
{
  return length;
}

double Rectangle::getWidth()
{
  return width;
}

double Rectangle::calcArea()
{
  return length * width;
}

int main () {

  Rectangle rectangle1;
  rectangle1.setLength(2);
  rectangle1.setWidth(3);
  cout << "The length of the rectangle is " << rectangle1.getLength() << " and the width is " << rectangle1.getWidth() << ", so the area is " << rectangle1.calcArea() << ".";

  return 0;
}
