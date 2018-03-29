#include<bits/stdc++.h>
using namespace std;

class Stack
{
	queue<int> q1, q2;
	int stack_size;
public:		
	Stack()
	{
		stack_size=0;
	}

	void push(int data)  // Push Operation Costly..Push every new element in front of q2, then pop from q1 and push to q2, then swap names.
	{
		q2.push(data);

		while(!q1.empty())
		{
			int x = q1.front();
			q2.push(x);
			q1.pop();
		}

		queue<int> q = q1;
		q1 = q2;
		q2 = q;

		stack_size++;
	}

	int pop()
	{
		if(q1.empty())
		{
			cout<<"Stack Underflow"<<endl;
			exit(0);
		}
		int x = q1.front();
		q1.pop();
		stack_size--;
		return x;
	}

	int top()
	{
		if(q1.empty())
			return -1;
		return q1.front();
	}

	int size()
	{
		return(stack_size);
	}
};

int main()
{
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);

	cout<<"Current Stack Size is: "<<s.size();
	cout<<"Stack Pop Started: "<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.pop()<<endl;

	return 0;
}