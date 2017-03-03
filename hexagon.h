#pragma once
#include "twoDshapes.h"
class hexagon :
	public twoDshapes
{

private:
	const string name;
	double cx;
	double cy;
public:
	double getdistance(double x, double y);
	double getcx();
	double getcy();
	string getname();
	void setcenterx(double cx);
	void setcentery(double cy);
	double area(double x);
	hexagon();
	~hexagon();
};

