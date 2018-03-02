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

void print_middle(class Node *head)
 {
 	if (head == NULL)
 		{
 			cout<<"NULL"<<endl;
 			return;
 		}	

 	class Node *fast_ptr = head;
 	class Node *slow_ptr = head;	
 		
 	while(fast_ptr!=NULL)
 	{
 		if (fast_ptr->next==NULL)
			break;
  		fast_ptr = fast_ptr->next->next;
 		slow_ptr = slow_ptr->next;
 	}
 	cout<<"Middle Element is "<< slow_ptr->data<<endl;
 }
int main()
{
	class Node *head = NULL;

	int n, data;
	cout<<"Enter Length of Linked list: ";
	cin>>n;
	for (int i=0; i<n; i++)
	{
		cout<<"Data: ";
		cin>>data;
		push(&head, data);
	}

	print_list(head);

	print_middle(head);
	return 0;
}