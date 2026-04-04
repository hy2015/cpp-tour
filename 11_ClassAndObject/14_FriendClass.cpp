#include <iostream>
using namespace std;

class GoodFriend;
class Building;

class GoodFriend
{
public:
	GoodFriend();

	void visit();

	Building * building;
};

class Building
{
	friend class GoodFriend;
public:
	Building(string SittingRoom, string BedRoom);
public:
	string SittingRoom;
private:
	string BedRoom;
};

Building::Building(string SittingRoom, string BedRoom)
{
	this->SittingRoom = SittingRoom;
	this->BedRoom = BedRoom;
}

GoodFriend::GoodFriend()
{
	building = new Building("客厅", "卧室");
}

void GoodFriend::visit()
{
	cout << "好朋友正在访问：" << building->SittingRoom << endl;
	cout << "好朋友正在访问：" << building->BedRoom << endl;
}

void test14()
{
	GoodFriend gf;

	gf.visit();
}

int main14()
{
	test14();
	return 0;
}