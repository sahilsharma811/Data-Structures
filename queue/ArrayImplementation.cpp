#include<iostream>
using namespace std;
#define MAX 100
class Queue
{
	int front, rear, size;
	int data[MAX];
public:
	Queue()
	{
		front=rear=size=-1;
	}

	bool isFull()
	{
		return (size==MAX);
	}

	bool isEmpty()
	{ 
		return(size==-1);
	}

	void push(int value)
	{
		if(isFull())
		{
			cout<<"Queue OverFlow"<<endl;
			return;
		}

		if (isEmpty())
			front=(front+1)%MAX;

		rear = (rear+1)%MAX;
		data[rear]=value;
		size++;
	}

	int pop()
	{
		if (isEmpty())
		{
			cout<<"Queue UnderFlow"<<endl;
			return -1;
		}

		int value = data[front];
		front = (front+1)%MAX;
		size--;
		return value;
	}

	void show()
	{
		if (isEmpty())
		{
			cout<<"Queue UnderFlow"<<endl;
			return;
		}

		for(int i=front; i<=rear; i++)
			cout<<data[i]<<"  ";
		cout<<endl;
	}
};

int main()
{
	Queue q;

	q.push(10);
	q.push(20);
	q.push(50);
	q.show();

	cout<<"Popped:"<<q.pop()<<endl;
	q.show();

	cout<<"Popped:"<<q.pop()<<endl;
	q.show();
	
	cout<<"Popped:"<<q.pop()<<endl;
	q.show();

	return 0;
}