#include<iostream>
using namespace std;

class Shape
{
public:
	int perimeter;
};

class Rectangle: virtual public Shape
{
};


class Parallelogram : virtual public Shape
{
};

class Square: public Rectangle, public Parallelogram 
{
};



void test05()
{
	Square s;

	s.Rectangle::perimeter = 18;
	s.Parallelogram::perimeter = 28;

	cout << "s.Rectangle::perimeter< -> " << s.Rectangle::perimeter<< endl;
	cout << "s.Parallelogram::perimeter -> " << s.Parallelogram::perimeter << endl;
	cout << "s.perimeter -> " << s.perimeter << endl;
}

int main()
{
	test05();
	return 0;
}