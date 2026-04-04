#include <iostream>
using namespace std;

class Cube
{
private:
	int length;
	int width;
	int height;
public:
	void setLength(int length)
	{
		this->length = length;
	}
	int getLength()
	{
		return this->length;
	}
	void setWidth(int width)
	{
		this->width = width;
	}
	int getWidth()
	{
		return this->width;
	}
	void setHeight(int height)
	{
		this->height = height;
	}
	int getHeight()
	{
		return this->height;
	}
	int getSurfaceArea() 
	{
		return 2 * (length * width + length * width + width * height);
	}
	int getVolume() 
	{
		return length * width * height;
	}
};

bool isSame(Cube& c1, Cube& c2)
{
	return c1.getLength() == c2.getLength()
		&& c1.getWidth() == c2.getWidth()
		&& c1.getHeight() == c2.getHeight();
}

int main03()
{
	Cube c1;
	c1.setLength(10);
	c1.setWidth(10);
	c1.setHeight(10);

	cout << "c1's area is: " << c1.getSurfaceArea() << endl;
	cout << "c1's volume is: " << c1.getVolume() << endl;

	Cube c2;
	c2.setLength(10);
	c2.setWidth(10);
	c2.setHeight(10);

	if (isSame(c1, c2))
	{
		cout << "c1 is the same as c2" << endl;
	}
	else
	{
		cout << "c1 isn't the same as c2" << endl;
	}
	
	return 0;
}