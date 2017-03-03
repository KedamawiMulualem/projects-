#include "triangle.h"



triangle::triangle():name("triangle"){
}
double triangle::area(double x) { return (sqrt(3)/4)*pow(x,2); }

double triangle::getdistance(double x, double y) { return sqrt(pow(this->cx - x, 2) + pow(this->cy - y, 2)); }
void triangle::setcenterx(double cx) { this->cx = cx; }
void triangle::setcentery(double cy) { this->cy = cy; }
double triangle::getcx() { return this->cx; }
double triangle::getcy() { return this->cy; }
string triangle::getname() { return name; }


triangle::~triangle()
{
}
