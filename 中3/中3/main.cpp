#include "Point.h"
int main()
{
	int a, b;
	cin >> a >> b;
	Point point1(a, b);
	cin >> a >> b;
	Point point2(a, b);
	cin >> a >> b;
	Point point3(a, b);

	cout << point1.toString() << "+" << point2.toString() << "-" << point3.toString() << "=";
	cout << point1.add(point2).subtract(point3).toString();

	system("pause");
	return 0;
}