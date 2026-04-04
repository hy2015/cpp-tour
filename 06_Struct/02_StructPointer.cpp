#include <iostream>
using namespace std;

struct Student
{
	string name;
	int age;
	double score;
};


int main02()
{

	Student s1 = { "Chen", 21, 100.0 };
	struct Student* p1 = &s1;

	cout << "p1 { name: " << p1->name << ", age: " << p1->age << ", score: " << p1->score << " }" << endl;

	return 0;
}