#include <string>
#include <iostream>

using namespace std;

void test_str02()
{
	string str1 = "Hello World";
	cout << "str1: " << str1 << endl; // 输出Hello World

	string str2;
	str2 = str1;
	cout << "str2: " << str2 << endl; // 输出Hello World

	string str3;
	str3 = 'a';
	cout << "str3: " << str3 << endl; // 输出a

	string str4;
	str4.assign("Hello C++");
	cout << "str4: " << str4 << endl; // 输出Hello C++

	string str5;
	str5.assign("Hello C++", 5);
	cout << "str5: " << str5 << endl; // 输出Hello

	string str6;	
	str6.assign(str5);
	cout << "str6: " << str6 << endl; // 输出Hello

	string str7;
	str7.assign(5, 'W');
	cout << "str7: " << str7 << endl; // 输出WWWWW

}

int main_str02()
{
	test_str02();
	return 0;
}