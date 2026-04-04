#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void test01()
{
	vector<int> v; // vector容器，默认构造函数

	v.push_back(10); // 向容器末尾添加一个元素
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);

	// 通过迭代器访问容器中的元素
	vector<int>::iterator itBegin = v.begin(); // 起始迭代器，指向第一个元素
	vector<int>::iterator itEnd = v.end(); // 结束迭代器，指向最后一个元素的下一个位置

	// 第一种访问方式：使用迭代器进行遍历
	while (itBegin != itEnd)
	{
		cout << *itBegin << " "; // 通过迭代器访问元素
		itBegin++; // 迭代器向后移动一个位置
	}

	cout << endl; // 输出换行

	// 第二种访问方式：使用范围for循环（C++11及以上）
	for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
	{
		cout << *it << " "; // 通过迭代器访问元素
	}

	// 第三种访问方式：使用auto关键字（C++11及以上）
	for_each(v.begin(), v.end(), [](int value) {
		cout << value << " "; // 通过lambda表达式访问元素
	});
}

int main01()
{
	test01();
	return 0;
}