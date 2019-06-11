#include <iostream>
#include <string>
#include <sstream>
#ifndef POINT_H
#define POINT_H
using namespace std;

class Point
{
public:
	Point();
	Point(int, int);
	int getA();
	int getB();
	Point add(Point);
	Point subtract(Point);
	string toString();
	void setA(int);
	void setB(int);
private:
	int a, b;
};

#endif POINT_H
