#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class Circle
{ private:
    double radius;

  public:
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
    void Circle::setRadius(double r)
    {
      radius = r;
    }

    double Circle::calcArea()
    {
      return 3.14 * pow(radius, 2);
    }

#endif
