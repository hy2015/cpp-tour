#include <iostream>
using namespace std;

struct Hero
{
	string name;
	int age;
	string sex;
};

void printHeros(Hero heros[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "姓名: " << heros[i].name << " 年龄: " << heros[i].age << " 性别: " << heros[i].sex << endl;
	}
}

void bubbleSort(Hero heros[], int len)
{
	for (int i = 0; i < len; i++) 
	{
		for (int j = 0; j < len - i - 1; j++)
		{
			if (heros[j].age > heros[j + 1].age) {
				Hero temp = heros[j];
				heros[j] = heros[j + 1];
				heros[j + 1] = temp;
			}
		}
	}
}

int main()
{
	Hero heros[] =
	{
		{"刘备", 23, "男"},
		{"关羽", 22, "男"},
		{"张飞", 20, "男"},
		{"赵云", 21, "男"},
		{"貂蝉", 19, "女"},
	};
	int len = sizeof(heros) / sizeof(heros[0]);

	cout << "排序前: " << endl;
	printHeros(heros, len);

	bubbleSort(heros, len);

	cout << "排序后: " << endl;
	printHeros(heros, len);

	return 0;
}