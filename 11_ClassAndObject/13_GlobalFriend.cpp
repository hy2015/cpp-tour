#include <iostream>
using namespace std;

class Building
{
	friend void GoodFriend(Building* building);
public:
	Building()
	{
		SittingRoom = "客厅";
		BedRoom = "卧室";
	}
public:
	string SittingRoom;
private:
	string BedRoom;
};

void GoodFriend(Building* building)
{
	cout << "访问好朋友的：" << building->SittingRoom << endl;
	cout << "访问好朋友的：" << building->BedRoom << endl;
}

void test13()
{
	Building building;
	GoodFriend(&building);
}

int main13()
{
	test13();
	system("pause");
	return 0;
}