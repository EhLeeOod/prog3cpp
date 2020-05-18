#include <iostream>
#include <iomanip>
#include <cmath>
#include "functions.h"


using namespace std;

int main()
{
  Demo demoObject;
  cout << endl << endl;
  Demo demoObjectWithParams(17);
  cout << endl << endl;
  Circle circular;
  circular.setRadius(1);
  cout << circular.calcArea() << "." << endl;

  Carpet purchase;

  double pricePerYd;
  double length;
  double width;

  cout << "Room length in feet: ";
  cin >> length;
  cout << "Room width in feet: ";
  cin >> width;
  cout << "Carpet price per square yard: ";
  cin >> pricePerYd;

  purchase.setDimensions(length, width);
  purchase.setPricePerYd(pricePerYd);

  cout << endl << "The total price of the " << length << " x " << width << " carpet is $" << purchase.getTotalPrice() << "." << endl;

  return 0;
}
