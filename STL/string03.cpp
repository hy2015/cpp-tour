#include <string>
#include <iostream>

using namespace std;

void test_str03()
{
	string str1 = "Hello";
	str1 += " World";
	cout << "str1: " << str1 << endl; // 输出Hello World

	str1 += '!';
	cout << "str1: " << str1 << endl; // 输出Hello World!

	string str2 = " Mion";
	str1 += str2;
	cout << "str1: " << str1 << endl; // 输出Hello World!Mion

	string str3 = "I";
	str3.append(" love ");
	cout << "str3: " << str3 << endl; // 输出I love

	str3.append("game dota2", 4);
	cout << "str3: " << str3 << endl; // 输出I lovegame

	string str4 = " Dota2 StarCraft2";
	//str3.append(str4);
	//cout << "str3: " << str3 << endl; // 输出I lovegame Dota2

	str3.append(str4, 5, 12);
	cout << "str3: " << str3 << endl; // 输出I lovegame Dota2 Starcraft
}

int main_str03()
{
	test_str03();
	return 0;
}