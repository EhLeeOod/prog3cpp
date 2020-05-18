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

    class Carpet
    {
      private:
        double pricePerSqYd; //used to set price per sq yd of carpet
        Rectangle size; //size is an instance of the Rectangle class

      public:
        void setPricePerYd(double p)
        { pricePerSqYd = p; }

        void setDimensions(double l, double w)
        {
          size.setLength(l/3);
          size.setWidth(w/3);
        }

        double getTotalPrice()
        { return size.calcArea() * pricePerSqYd; }
    };


#endif
