#include <iostream>
#include <iomanip>
#include <cmath>
#include "functions.h"
//#include "rectangle.h"
using namespace std;

class Carpet
{
  private:
    double pricePerSqYd; //used to set price per sq yd of carpet
    Rectangle size; //size is an instance of the Rectangle class

  public:
    void setPricePerYd(double p)
    { pricePerSqyd = p; }

    void setDimensions(double l, double w)
    {
      size.setLength(l/3);
      size.setWidth(w/3);
    }

    double getTotalPrice()
    { return size.calcArea() * pricePerSqYd; }
};

int main() {
  return 0;
}
