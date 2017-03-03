

#include "twoDshapes.h"
#include "circle.h"
#include "triangle.h"
#include "hexagon.h"
#include "square.h"
#include <string>
#include<iostream>
#include <cmath>
	using namespace std;
double side;
string choice;
bool area;
bool dis;
double x;
string shape2;
double y;
bool yes = true;
int main() {
	twoDshapes *shape = nullptr;
	string str;


	char switch_on;
	cout << "-------------------------------------- Welcome to our Virtual Calculator--------------------------------------------- " << endl << endl;

	while (yes) { //loop to run the program if user decides
		dis = false;
		bool con = true;
		x = 0;
		y = 0;
		shape2 = " ";
		area = false; choice = " ";
		side = 0;


		cout << "				To calculate the area of your chosen shape type area. If you want to find the " << endl << "                                         distance between to shapes on the X Y plane type distance." << endl;
	top: //if input is not area or distance it loops
		cin >> choice;


		if (choice.at(0) == 'a' || choice.at(0) == 'A') {
			cout << "				Which shape do you want to calculate the area of? A circle, triangle, hexagon, or square?               " << endl;
			area = true;

			cin >> str;

			if (str.at(0) == 'c' || str.at(0) == 'C')
			{
				cout << "				What is the length of the radius?                           " << endl;
			}
			else {
				cout << "				What is the length of the side?                                  " << endl;
			}

			cin >> side;
			con = false;
		}
		else if (choice.at(0) == 'd' || choice.at(0) == 'D') {
			cout << "				What is your first shape circle, triangle, hexagon, or square?" << endl;
			cin >> str;
			dis = true;
			con = false;

		}
		else {
			cout << "				You entered an invalid input, please enter 'area' or 'distance' " << endl; goto top;
		}



		switch_on = str.at(0);
		switch (switch_on)
		{
		case 'c':
		case 'C':
			shape = new circle();
			break;
		case 'h':
		case 'H':
			shape = new hexagon();
			break;
		case 's':
		case 'S':
			shape = new square();
			break;
		case 't':
		case 'T':
			shape = new triangle();
			break;

		default:
			shape = new circle();
			break;


		}
		cin >> *shape;
		if (area) {
			cout << "				The area of your " << shape->getname() << " is " << shape->area(side) << endl;;
		}
		else if (dis) {
			cout << "				what is the x value for your  " << shape->getname() << " center" << endl;
			cin >> x;
			shape->setcenterx(x);
			cout << "				what is the y value for your  " << shape->getname() << " center" << endl;
			cin >> y;
			shape->setcentery(y);
			cout << "				what is your next shape?" << endl;
			cin >> choice;
			switch_on = choice.at(0);
			switch (switch_on)
			{
			case 'c':
			case 'C':
				shape2 = "circle";
				break;
			case 'h':
			case 'H':
				shape2 = "hexagon";
				break;
			case 's':
			case 'S':
				shape2 = "square";
				break;
			case 't':
			case 'T':
				shape2 = "triangle";
				break;

			default:
				shape2 = "uknown";
				break;


			}
			cout << "				what is the x value for your  " << shape2 << " center" << endl;
			cin >> x;
			cout << "				what is the y value for your  " << shape2 << " center" << endl;
			cin >> y;
			cout << "				The distance between " << shape->getname() << " and " << shape2 << " is " << shape->getdistance(x, y) << endl;
		}

		cout << "				Do you want to do another calculation (yes or no)" << endl;
		cin >> choice;
		if (choice.at(0) == 'y' || choice.at(0) == 'Y') {
			yes = true;
		}
		else {
			yes = false;
		}
	}
	system("pause");
	return 0;


}
