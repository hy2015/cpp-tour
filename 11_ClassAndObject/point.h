#pragma once
#include <iostream>
using namespace std;


class Point
{
public:
	double getX();
	void setX(double x);
	double getY();
	void setY(double y);

private:
	double m_X;
	double m_Y;
};