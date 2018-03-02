#include<iostream>
using namespace std;
class Node
	{
	public:
		int data;
		class Node *next;
		Node(int data)
		{
			this->data=data;
			next=NULL;
		}
	};

void push(class Node **head, int data)
	{
		class Node *n = new Node(data); 
		n->next = (*head);
		(*head) = n;
	}

void show(class Node *head)
	{
		class Node *ptr = head;
		while(ptr!=NULL)
		{
			cout<<ptr->data<<" -> ";
			ptr = ptr->next;
		}
		cout<<"NULL"<<endl;
	}

class Node *reverse(class Node *head, int k)
	{
		class Node *current = head;
		class Node *prev = NULL;
		class Node *next;
		int count = 0;
		while(current!=NULL && count<k)
		{
			next = current->next;
			current->next = prev;
			prev = current;
			current = next;
			count++;
		}
		if(head!=NULL)
			head->next = current;

		count = 0;
		while(count < k-1 && current!=NULL)
		{
			current = current->next;
			count++;
		}

		if(current != NULL)
			current->next = reverse(current->next,k);
		return prev;
	}
int main()
	{
		class Node *head = NULL;

		push(&head,13);
		push(&head,2);
		push(&head,15);
		push(&head,10);
		push(&head,23);
		push(&head,5);
		push(&head,1);
		push(&head,55);
		push(&head,28);

		cout<<"Initial List"<<endl;
		show(head);

		head = reverse(head,3);

		cout<<"Reversed List"<<endl;
		show(head);
	return 0;
	}