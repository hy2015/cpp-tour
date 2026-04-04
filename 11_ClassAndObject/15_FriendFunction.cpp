#include <iostream>
using namespace std;

class Building2;
class GoodFriend2;

class GoodFriend2
{
public:
	GoodFriend2();
public:
	void visit();

	Building2* building;
};


class Building2
{
	friend void GoodFriend2::visit();
public:
	Building2();
public:
	string SittingRoom;
private:
	string BedRoom;
};

Building2::Building2()
{
	SittingRoom = "客厅";
	BedRoom = "卧室";
}

GoodFriend2::GoodFriend2()
{
	building = new Building2;
}

void GoodFriend2::visit()
{
	cout << "好朋友访问：" << building->SittingRoom << endl;
	cout << "好朋友访问：" << building->BedRoom << endl;
}
 
void test15()
{
	GoodFriend2 gf;
	gf.visit();
}


int main()
{
	test15();
	return 0;
}