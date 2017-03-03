#include "circle.h"



circle::circle():name("circle")
{
}
double circle::getdistance(double x, double y) { return sqrt(pow(this->cx - x, 2) + pow(this->cy - y, 2)); }
void circle::setcenterx(double cx) { this->cx = cx; }
void circle::setcentery(double cy) { this->cy = cy; }
double circle::getcx() { return this->cx; }
double circle::getcy() { return this->cy; }
string circle::getname() { return name; }

double circle::area(double x) { return pi*pow(x, 2); }
circle::~circle()
{
}
