#include <iostream>
#include "point.h"
#include "circle.h"
using namespace std;

//class Point
//{
//public:
//	double getX() 
//	{
//		return m_X;
//	}
//	void setX(double x)
//	{
//		m_X = x;
//	}
//	double getY()
//	{
//		return m_Y;
//	}
//	void setY(double y)
//	{
//		m_Y = y;
//	}
//
//private:
//	double m_X;
//	double m_Y;
//};

//class Circle
//{
//public:
//
//	double getR() 
//	{
//		return m_R;
//	}
//	void setR(double r)
//	{
//		m_R = r;
//	}
//	Point getCenter()
//	{
//		return m_Center;
//	}
//	void setCenter(Point center)
//	{
//		m_Center = center;
//	}
//
//private:
//	double m_R;
//	Point m_Center;
//};

void isInCircle(Circle& c, Point& p)
{
	double distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());

	double rDistance = c.getR() * c.getR();

	cout << distance << " || " << rDistance << " -> " << (distance - rDistance) << endl;
	if (distance == rDistance)
	{
		cout << "点在圆上" << endl;
	}
	else if (distance < rDistance)
	{
		cout << "点在圆内" << endl;
	}
	else
	{
		cout << "点在圆外" << endl;
	}
}

double getDistance(Circle& c, Point& p)
{
	double distance =
		(c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) +
		(c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	return distance;
}

int main04()
{
	Point p1;
	p1.setX(6.76);
	p1.setY(9.84);

	Circle c1;
	Point cp;
	cp.setX(7.61);
	cp.setY(8.14);
	c1.setCenter(cp);
	c1.setR(1.9006577808748209);
	//c1.setR(2.0);

	cout << "圆心与点的距离的平方是：" << getDistance(c1, p1) << endl;
	cout << "圆半径的平方是：" << c1.getR() * c1.getR() << endl;
	isInCircle(c1, p1);
	return 0;
}