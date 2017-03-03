#include "hexagon.h"



hexagon::hexagon():name("hexagon")
{
}

hexagon::~hexagon()
{
}

double hexagon::getdistance(double x, double y) { return sqrt(pow(this->cx - x, 2) + pow(this->cy - y, 2)); }
void hexagon::setcenterx(double cx) { this->cx = cx; }
void hexagon::setcentery(double cy) { this->cy = cy; }
double hexagon::getcx() { return this->cx; }
double hexagon::getcy() { return this->cy; }
string hexagon::getname() { return name; }
double hexagon::area(double x) { return((3 * (sqrt(3))) / 2)*pow(x, 2); }