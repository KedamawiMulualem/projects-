#pragma once
#include<iostream>
#include<string>
using namespace std;
#include<cmath>
class twoDshapes
{
private :
	double cx;
	const string name;
	double cy;
public:
	 virtual double getdistance(double x, double y)=0 ;
	 virtual double getcx()=0;
	 virtual double getcy()=0;
	 virtual string getname()=0;
	 virtual void setcenterx(double cx)=0;
	virtual void setcentery(double cy)=0;
	friend istream& operator >> (istream &in, twoDshapes&f);
	 virtual double area(double x) =0;

	
	twoDshapes();
	~twoDshapes();
};

