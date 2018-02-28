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
		next=NULL;
	}
};

void push(class Node **head, int data)
{
	class Node *node = new Node(data);
	node->next = *head;
	*head = node;
}

void print_list(class Node *head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" -> ";
		head = head->next;
	}
	cout<<"NULL"<<endl;
}

void print_alternate(class Node *head, bool chk)
 {
 	if (head == NULL)
 		{
 			cout<<"NULL"<<endl;
 			return;
 		}	
 	if(chk)
 	{
 		cout<<head->data<<"->";
 	}
 	head = head->next;
 	print_alternate(head, !chk);
 }
int main()
{
	class Node *head = NULL;

	push(&head,10);
	push(&head,5);
	push(&head,40);
	push(&head,50);
	push(&head,67);
	push(&head,23);
	push(&head,76);

	print_list(head);

	print_alternate(head, 1);
	return 0;
}