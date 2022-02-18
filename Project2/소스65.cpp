// 10773 Á¦·Î

#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> stk;
	int test = 0, val = 0, sum = 0;
	cin >> test;

	for (int i = 0; i < test; i++)
	{
		cin >> val;
		if (val != 0)
		{
			stk.push(val);
		}
		else
		{
			stk.pop();
		}

	}
	while (stk.size())
	{
		sum += stk.top();
		stk.pop();
	}
	cout << sum;
}

//#include <iostream>
//using namespace std;
//
//class stack
//{
//public:
//	stack();
//	~stack();
//	void push(int val);
//	void pop();
//	int top();
//	int size();
//
//private:
//	int int_stack[100002];
//	int index_point;
//};
//
//stack::stack()
//{
//	index_point = 1;
//	*int_stack = { 0, };
//}
//
//stack::~stack()
//{
//}
//
//void stack::push(int val)
//{
//	int_stack[index_point] = val;
//	index_point++;
//}
//
//void stack:: pop()
//{
//	int_stack[index_point] = 0;
//	index_point--;
//}
//
//int stack:: top()
//{
//	return int_stack[index_point];
//}
//
//int stack::size()
//{
//	return index_point;
//}
//
//int main()
//{
//	stack stk;
//	int test = 0, val = 0, sum = 0;
//	cin >> test;
//	for (int i = 0; i < test; i++)
//	{
//		cin >> val;
//		if (val != 0)
//		{
//			stk.push(val);
//		}
//		else
//		{
//			stk.pop();
//		}
//	}
//	while (stk.size())
//	{
//		sum += stk.top();
//		stk.pop();
//	}
//	cout << sum;
//}