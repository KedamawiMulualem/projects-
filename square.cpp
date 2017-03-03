#include "square.h"



square::square():name("square")
{
}
double square::getdistance(double x, double y) { return sqrt(pow(this->cx - x, 2) + pow(this->cy - y, 2)); }
void square::setcenterx(double cx) { this->cx = cx; }
void square::setcentery(double cy) { this->cy = cy; }
double square::getcx() { return this->cx; }
double square::getcy() { return this->cy; }
string square::getname() { return name; }


double square::area(double x) 
{ return pow(x, 2); }
square::~square()
{
}
