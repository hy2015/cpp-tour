#include <iostream>
using namespace std;

#define MAX 1000

struct Person
{
	string m_Name;
	int m_Sex; // 1、男  2、女
	int m_Age;
	string m_Phone;
	string m_Addr;
};

struct Addressbook
{
	Person personArray[MAX];
	int m_Size;
};

void showMenu()
{
	cout << "*************************" << endl;
	cout << "***** 1、添加联系人 *****" << endl;
	cout << "***** 2、显示联系人 *****" << endl;
	cout << "***** 3、删除联系人 *****" << endl;
	cout << "***** 4、查找联系人 *****" << endl;
	cout << "***** 5、修改联系人 *****" << endl;
	cout << "***** 6、清空联系人 *****" << endl;
	cout << "***** 0、退出通讯录 *****" << endl;
	cout << "*************************" << endl;
}

//1、添加联系人
void addPerson(Addressbook* ab) 
{
	//判断通讯录是否已满，如果满了就不再添加
	if (ab->m_Size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else
	{
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		ab->personArray[ab->m_Size].m_Name = name;

		int sex = 0;
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		while (true) 
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				ab->personArray[ab->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入！" << endl;
		}
		
		int age;
		cout << "请输入年龄：" << endl;
		cin >> age;
		ab->personArray[ab->m_Size].m_Age = age;
		
		string phone;
		cout << "请输入电话号码：" << endl;
		cin >> phone;
		ab->personArray[ab->m_Size].m_Phone = phone;

		string addr;
		cout << "请输入家庭地址：" << endl;
		cin >> addr;
		ab->personArray[ab->m_Size].m_Addr = addr;

		ab->m_Size++;
		cout << "添加成功！" << endl;

		system("pause");
		system("cls");
	}
}

void listPerson(const Addressbook* ab)
{
	//判断通讯录人数是否为0，如果为0，返回通讯录为空
	//否则遍历通讯录并返回
	if (ab->m_Size == 0) 
	{
		cout << "通讯录为空" << endl;
	}
	else
	{
		for (int i = 0; i < ab->m_Size; i++) 
		{
			cout << "姓名： " << ab->personArray[i].m_Name << "\t";
			cout << "性别： " << (ab->personArray[i].m_Sex==1?"男":"女") << "\t";
			cout << "年龄： " << ab->personArray[i].m_Age << "\t";
			cout << "电话： " << ab->personArray[i].m_Phone << "\t";
			cout << "住址： " << ab->personArray[i].m_Addr << endl;
		}
	}

	system("pause");
	system("cls");

}

// 检查联系人是否存在
int isExist(Addressbook* ab, string name)
{
	for (int i = 0; i < ab->m_Size; i++)
	{
		if (ab->personArray[i].m_Name == name)
		{
			return i;
		}
	}
	return -1;
}

void deletePerson(Addressbook* ab)
{
	cout << "请输入删除联系人姓名：" << endl;
	string name;
	cin >> name;
	int ret = isExist(ab, name);

	if (ret == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		for (int i = ret; i < ab->m_Size; i++)
		{
			ab->personArray[i] = ab->personArray[i + 1];
		}
		ab->m_Size--;
		cout << "删除成功！" << endl;
	}

	system("pause");
	system("cls");
}

void findPerson(Addressbook* ab)
{
	cout << "请输入您要查找的联系人：" << endl;
	string name;
	cin >> name;
	int i = isExist(ab, name);

	if (i == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		cout << "姓名： " << ab->personArray[i].m_Name << "\t";
		cout << "性别： " << (ab->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
		cout << "年龄： " << ab->personArray[i].m_Age << "\t";
		cout << "电话： " << ab->personArray[i].m_Phone << "\t";
		cout << "住址： " << ab->personArray[i].m_Addr << endl;
	}

	system("pause");
	system("cls");
}

void modifyPerson(Addressbook* ab)
{
	cout << "请输入您要修改的联系人：" << endl;
	string name;
	cin >> name;
	int i = isExist(ab, name);

	if (i == -1)
	{
		cout << "查无此人" << endl;
	}
	else
	{
		string name;
		cout << "请输入姓名：" << endl;
		cin >> name;
		ab->personArray[i].m_Name = name;

		int sex = 0;
		cout << "请输入性别：" << endl;
		cout << "1 --- 男" << endl;
		cout << "2 --- 女" << endl;
		while (true)
		{
			cin >> sex;
			if (sex == 1 || sex == 2)
			{
				ab->personArray[i].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入！" << endl;
		}

		int age;
		cout << "请输入年龄：" << endl;
		cin >> age;
		ab->personArray[i].m_Age = age;

		string phone;
		cout << "请输入电话号码：" << endl;
		cin >> phone;
		ab->personArray[i].m_Phone = phone;

		string addr;
		cout << "请输入家庭地址：" << endl;
		cin >> addr;
		ab->personArray[i].m_Addr = addr;

		cout << "修改成功！" << endl;
	}

	system("pause");
	system("cls");
}

void truncateAddressbook(Addressbook* ab)
{
	ab->m_Size = 0;
	cout << "通讯录已被清空！" << endl;

	system("pause");
	system("cls");
}


int main()
{
	Addressbook ab;
	ab.m_Size = 0;

	int select = 0;


	while (true)
	{
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1:  // 添加联系人
			addPerson(&ab);
			break;
		case 2:  // 显示联系人
			listPerson(&ab);
			break;
		case 3:   // 删除联系人
			deletePerson(&ab);
			break;
		case 4:   //查找联系人
			findPerson(&ab);
			break;
		case 5:   //修改联系人
			modifyPerson(&ab);
			break;
		case 6:   //清空通讯录
			truncateAddressbook(&ab);
			break;
		case 0:
			cout << "欢迎下次使用" << endl;
			return 0;
			break;
		default:
			break;
		}
	}
	
	return 0;
}