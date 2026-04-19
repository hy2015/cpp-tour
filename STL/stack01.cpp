#include <iostream>
#include <stack>
using namespace std;

void test_stk01()
{
	stack<int> s;
	
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	cout << "Stack size: " << s.size() << endl;

	while (!s.empty())
	{
		cout << "The top element of stack is: " << s.top() << endl;
		s.pop();
	}

	cout << "Stack size: " << s.size() << endl;
}

int main_stack01()
{
	test_stk01();
	return 0;
}