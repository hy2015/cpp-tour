#include <iostream>
using namespace std;

struct Student
{
	string name;
	double score;
};

struct Teacher
{
	string tName;
	Student sArray[5];
};

void allocateSpace(Teacher tArray[], int len)
{
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++) {
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].name = "Student_";
			tArray[i].sArray[j].name += nameSeed[j];

			int score = rand() % 61 + 40;
			tArray[i].sArray[j].score = score;
		}
	}
}

void printInfo(Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++) {
		cout << "Teacher Name: " << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++) {
			cout << "\tHis student name: " << tArray[i].sArray[j].name << ", student score: " << tArray[i].sArray[j].score << endl;
		}
	}
}


int main03()
{

	srand((unsigned int)time(NULL));

	Teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);

	allocateSpace(tArray, len);
	printInfo(tArray, len);

	return 0;
}