#include<bits/stdc++.h>
using namespace std;

class QNode
{
public:
	int data;
	class QNode *next;
	QNode(int data)
	{
		this->data=data;
		next = NULL;
	}	
};

class queues
{
	QNode *front, *rear;

public:
	queues()
	{
		front=rear=NULL;
	}

	bool isEmpty()
	{
		return(front==NULL);
	}

	void enqueue(int value)
	{
		QNode *q = new QNode(value);
		if(isEmpty())
		{
			front=rear=q;
			return;
		}
		rear->next = q;
		rear = rear->next;
	}

	void dequeue()
	{
		if (isEmpty())
		{
			cout<<"Queue Empty"<<endl;
			return;
		}
		QNode *q = front;
		front=front->next;
		cout<<"Element Deleted: "<<q->data<<endl;
		free(q);
	}

	void show()
	{
		QNode *temp = front;

		while(temp!=rear)
		{
			cout<<temp->data<<"  ";
			temp = temp->next;
		}
		cout<<" NULL "<<endl;
	}
};
int main()
{
	queues *q = new queues();

	q->enqueue(10);
	q->enqueue(20);
	q->enqueue(1);
	q->enqueue(34);
	q->show();

	q->dequeue();
	q->show();

	q->dequeue();
	q->show();
	return 0;
}