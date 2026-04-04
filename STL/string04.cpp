#include <iostream>
#include <string>

using namespace std;

void test_str04()
{
	string str1 = "abcdefgde";

	int pos = str1.find("de"); // 返回3

	if(pos == -1)
	{
		cout << "not found" << endl;
	}
	else {
		cout << "found, pos: " << pos << endl;
	}

	// 从后往前找, find 是从前往后找
	pos = str1.rfind("de"); // 返回7
	cout << "pos: " << pos << endl;
	
}

void test_str04_2()
{
	string str1 = "abcdefg";
	str1.replace(1, 3, "12345"); // 从索引2开始替换3个字符为12345

	cout << "str1: " << str1 << endl; // 输出a12345fg
}

int main_str04()
{
	test_str04();
	test_str04_2();	
	return 0;
}