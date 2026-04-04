#include <iostream>
using namespace std;

int g_a = 10;
int g_b = 10;

const int c_g_a = 10;
const int c_g_b = 10;

int main01()
{
	int a = 10;
	int b = 10;

	cout << "局部变量a的地址为：" << (long)&a << endl;
	cout << "局部变量b的地址为：" << (long)&b << endl;

	cout << "全局变量g_a的地址为：" << (long)&g_a << endl;
	cout << "全局变量g_b的地址为：" << (long)&g_b << endl;

	static int s_a = 10;
	static int s_b = 10;
	cout << "静态变量s_a的地址为：" << (long)&s_a << endl;
	cout << "静态变量s_b的地址为：" << (long)&s_b << endl;

	cout << "字符串常量的地址为：" << (long)&"hello world" << endl;

	cout << "全局常量c_g_a的地址为：" << (long)&c_g_a << endl;
	cout << "全局常量c_g_b的地址为：" << (long)&c_g_b << endl;

	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "局部常量c_l_a的地址为：" << (long)&c_l_a << endl;
	cout << "局部常量c_l_b的地址为：" << (long)&c_l_b << endl;

	//system("pause");
	return 0;
}