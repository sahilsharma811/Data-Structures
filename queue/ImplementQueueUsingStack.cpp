#include<bits/stdc++.h>
using namespace std;

class sNode
{
public:	
	int data;
	sNode *next;
	sNode(int data)
	{
		this->data = data;
		next = NULL;
	}
};

class Queue
{
public:
	class sNode *s1, *s2;
};

void push(class sNode **top, int data)
{
 class sNode *n = new sNode(data);
 n->next = (*top);
 (*top) = n;
}

int pop(class sNode **top)
{
	class sNode *tmp = (*top);
	int x = tmp->data;
	(*top) = (*top)->next;
	free(tmp);
	return(x);
}

void enqueue(class Queue *q, int data)
{
	push(&q->s1, data);
}

int dequeue(class Queue *q)
{
	if (q->s1==NULL && q->s2==NULL)
	{
		cout<<"Stack UnderFlow"<<endl;
		exit(0);
	}

	if(q->s2==NULL)
	{
		while(q->s1!=NULL)
		{
			int x = pop(&q->s1);
			push(&q->s2, x);
		}
	}
	int x = pop(&q->s2);
	return x;
}


int main()
{
	Queue *q = new Queue();
	q->s1=NULL;
	q->s2=NULL;

	enqueue(q, 10);
	enqueue(q, 20);
	enqueue(q, 30);
	enqueue(q, 40);
	
	cout<<"Queue is: ";
	cout<<dequeue(q)<<"  ";
	cout<<dequeue(q)<<"  ";
	cout<<dequeue(q)<<"  ";
	cout<<dequeue(q)<<"  ";
	cout<<dequeue(q)<<"  ";
	cout<<endl;
	return 0;
}