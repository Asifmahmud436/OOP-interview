#include <iostream>
#include <string>
#define M_PI 3.141592654
using namespace std;

class Shape{
    public:
        virtual double area() = 0;
        virtual double perimeter() = 0;
};

class Circle:public Shape{
    private:
        double radius;
    public:
        Circle(double r) : radius(r){};

        double area() override{
            return radius*radius*M_PI;
        }

        double perimeter() override{
            return radius*2*M_PI;
        }
};

class Rectangle:public Shape{
    private:
        double height;
        double width;
    public:
        Rectangle(double h,double w) : height(h),width(w){};

        double area() override{
            return height*width;
        }

        double perimeter() override{
            return 2*(height+width);
        }
};