#include "circle.h"


double Circle::getR()
{
	return m_R;
}
void Circle::setR(double r)
{
	m_R = r;
}
Point Circle::getCenter()
{
	return m_Center;
}
void Circle::setCenter(Point center)
{
	m_Center = center;
}