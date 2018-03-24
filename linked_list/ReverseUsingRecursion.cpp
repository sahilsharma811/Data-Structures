#include<iostream>
using namespace std;

class Node
{
public:
	int data;
	class Node *next;

	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

void push(Node **head, int data)
{
	Node *n = new Node(data);
	n->next = (*head);
	(*head) = n;
}

void show(Node *head)
{
 	while(head!=NULL)
 	{
 		cout<<head->data<<" -> ";
 		head = head->next;
 	}
 	cout<<"NULL"<<endl;
}

void reverse(Node *head)
{
	if (head==NULL)
		return;

	reverse(head->next);
	cout<<head->data<<" -> ";
	return;
}

int main()
{
	int n, data;
	Node *head = NULL;
	cout<<"Enter the number of elements in Linked List: ";
	cin>>n;

	for(int i=0; i<n; i++)
	{
		cout<<"Enter Value: ";
		cin>>data;
		push(&head, data);
	}	
	show(head);
	reverse(head);
	cout<<"NULL"<<endl;
	return 0;
}