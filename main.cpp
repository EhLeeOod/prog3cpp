#include <iostream>
#include <iomanip>
#include <cmath>
#include "functions.h"

using namespace std;

int main()
{
  Demo demoObject;
  cout << endl << endl;
  Circle circular;
  circular.setRadius(1);
  cout << circular.calcArea() << "." << endl;

  return 0;
}
