#include<iostream>
using namespace std;
#define MAX 100

class Stacks
{
	int top;
	int data[MAX];
public:
	Stacks()
	{
		top=-1;
	}
	bool isFull()
	{
		return(top==MAX);
	}
	
	void push(int value)
	{
		if (isFull()==1)
		{
			cout<<"Stack OverFlow"<<endl;
			return;
		}
		top++;
		data[top]=value;
	}

	bool isEmpty()
	{
		return(top==-1);
	}

	int pop()
	{
		if (isEmpty()==1)
		{
			cout<<"UnderFlow"<<endl;
			return -1;
		}

		int value = data[top];
		top--;
		return value;
	}

	void show()
	{
		if (isEmpty()==1)
		{
			cout<<"Stack UnderFlow"<<endl;
			return;
		}
		for(int i=0; i<=top; i++)
			cout<<data[i]<<" ";
		cout<<endl;
	}
};

int main()
{
	Stacks s;
	s.push(10);
	s.push(20);
	s.push(04);

	s.show();
	
	cout<<"Poping.."<<s.pop()<<endl;
	s.show();
	
	cout<<"Poping.."<<s.pop()<<endl;
	s.show();

	cout<<"Poping.."<<s.pop()<<endl;
	s.show();

	return 0;
}