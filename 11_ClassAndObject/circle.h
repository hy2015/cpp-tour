#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class Circle
{
public:
	double getR();
	void setR(double r);
	Point getCenter();
	void setCenter(Point center);

private:
	double m_R;
	Point m_Center;
};