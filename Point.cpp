#include "Point.h"
#include<iostream>
using namespace std;

Point::Point()
{
    x=0.0;
    y=0.0;
}


Point::Point (double nx,double ny)
{
    x=nx;
    y=ny;
}
Point::Point(Point &p)
{
    x=p.x;
    y=p.y;
}
void Point::setx(double mx)
{
    x=mx;
}
void Point::sety(double my)
{
    y=my;
}
double Point::getx()
{
    return x;
}
double Point::gety()
{
    return y;
}
void Point::imprimir_point()
{
    cout << "(" << x << "," << y << ")"<<endl;
}
void Point::modify_point(double nx,double ny)
{
    x=nx;
    y=ny;
}
