#include <iostream>
using namespace std;

struct Student
{
	string name;
	int age;
	double score;
};


int main01()
{
	struct Student s1;
	s1.name = "Lin";
	s1.age = 18;
	s1.score = 80.5;

	Student s2 = { "Chen", 21, 100.0 };

	cout << "s1 { name: " << s1.name << ", age: " << s1.age << ", score: " << s1.score << " }" << endl;
	cout << "s2 { name: " << s2.name << ", age: " << s2.age << ", score: " << s2.score << " }" << endl;
	return 0;
}