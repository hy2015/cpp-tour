#include "person.h"

void test13()
{
	Person<string, int> p1("Mion", 18);
	p1.showPerson();
}

int main13()
{
	test13();
	system("pause");
	return 0;
}