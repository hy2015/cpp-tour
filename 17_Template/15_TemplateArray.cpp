#include "MyArray.cpp"

void printIntArray(MyArray<int> arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

class Person
{
public:
	Person() {};

	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age = 0;
};

void printPersonArr(MyArray<Person> & arr)
{
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "Name: " << arr[i].m_Name << ", Age: " << arr[i].m_Age << endl;
	}
	cout << "End print Person Array" << endl;
}

void test17()
{
	//MyArray<int> arr1(5);
	//MyArray<int> arr2(arr1);

	//MyArray<int> arr3(100);
	//arr3 = arr1;

	cout << "arr1 ===========" << endl;
	MyArray<int> arr1(5);
	for (int i = 0; i < arr1.getCapacity(); i++)
	{
		arr1.pushBack(i);
	}
	printIntArray(arr1);

	cout << "arr1's capacity is: " << arr1.getCapacity() << endl;
	cout << "arr1's size is: " << arr1.getSize () << endl;

	cout << "arr2 ===========" << endl;
	MyArray<int> arr2(arr1);
	printIntArray(arr2);

	arr2.popBack();
	cout << "arr2's capacity is: " << arr2.getCapacity() << endl;
	cout << "arr2's size is: " << arr2.getSize() << endl;
}

void test17Person()
{
	MyArray<Person> arr(10);

	Person p1("Mion", 18);
	Person p2("Ria", 20);
	Person p3("Julia", 30);
	Person p4("Yuma", 22);
	Person p5("Yuna", 25);
	Person p6("Rion", 23);
	
	arr.pushBack(p1);
	arr.pushBack(p2);
	arr.pushBack(p3);
	arr.pushBack(p4);
	arr.pushBack(p5);
	arr.pushBack(p6);

	printPersonArr(arr);
}

int main()
{
	//test17();
	test17Person();
	system("pause");
	return 0;
}