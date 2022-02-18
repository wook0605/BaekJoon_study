//10828 ╫╨ец

#include <iostream>
#include <string>

using namespace std;

class stack
{
public:
	stack();
	~stack();
	void push(int num);
	int pop();
	int size();
	bool empty();
	int top();
private:
	int arr[10000];
	int point;
	int temp;
};

stack::stack()
{
	point = -1;
	temp = 0;
}

stack::~stack()
{
}

void stack::push(int num)
{
	arr[++point] = num;
}

int stack::pop()
{
	if (point == -1) return -1;
	else
	{
		temp = arr[point];
		arr[point--] = 0;
		return temp;
	}
}

int stack::size()
{
	return point + 1;
}

bool stack::empty()
{
	if (point == -1) return true;
	else return false;
}

int stack::top()
{
	if (point == -1) return -1;
	else return arr[point];
}

stack stk;

int main()
{
	string commend;
	int temp = 0;
	int testcase = 0;
	int count = 0;
	cin >> testcase;
	for (int i = 0; i < testcase; i++)
	{
		cin >> commend;
		
		if (commend == "push")
		{
			cin >> temp;
			stk.push(temp);
		}
		else if (commend == "pop")
		{
			cout << stk.pop() << "\n";
		}
		else if (commend == "size")
		{
			cout << stk.size() << "\n";
		}
		else if (commend == "empty")
		{
			cout << stk.empty() << "\n";
		}
		else if (commend == "top")
		{
			cout << stk.top() << "\n";
		}
		commend.clear();
		temp = 0;
		count = 0;
	}
}