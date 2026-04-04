#include <iostream>
using namespace std;

const double PI = 3.14;

class Circle
{
public:
	double radius;

	double calcPerimter()
	{
		return 2 * PI * radius;
	}
};

int main01()
{
	Circle c = Circle();
	c.radius = 1;
	cout << "圆的周长是: " << c.calcPerimter() << endl;

	return 0;
}