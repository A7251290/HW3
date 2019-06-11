#include "Point.h"

Point::Point()
{

}
Point::Point(int newA, int newB)
{
	a = newA;
	b = newB;
}
int Point::getA() 
{
	return a;
}
int Point::getB()
{
	return b;
}
Point Point::add(Point n1)
{
	int x = a + (n1.getA());
	int y = b + (n1.getB());
	return Point(x, y);
}
Point Point::subtract(Point n2)
{
	int x = a - (n2.getA());
	int y = b - (n2.getB());
	return Point(x, y);
}
string Point::toString()
{
	stringstream ss1, ss2;
	ss1 << a;
	ss2 << b;
	return "(" + ss1.str() + "," + ss2.str() + ")";
}
void Point::setA(int newA)
{
	a = newA;
}
void Point::setB(int newB)
{
	b = newB;
}