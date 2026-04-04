#include <string>
#include <iostream>

using namespace std;

// string类的构造函数
void test_str01()
{
	string str1; // 默认构造函数，创建一个空字符串
	string str2("Hello"); // 使用C风格字符串初始化
	string str3(str2); // 使用另一个string对象初始化
	string str4(5, 'A'); // 创建一个包含5个字符'A'的字符串
	cout << "str1: " << str1 << endl; // 输出空字符串
	cout << "str2: " << str2 << endl; // 输出Hello
	cout << "str3: " << str3 << endl; // 输出Hello
	cout << "str4: " << str4 << endl; // 输出AAAAA
}

int main_str01()
{
	test_str01();
	return 0;
}