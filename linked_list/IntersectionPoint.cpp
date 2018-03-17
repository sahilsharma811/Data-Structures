// Using Hash Maps 

#include<iostream>
#include<unordered_map>
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
	Node *new_node = new Node(data);
	new_node->next = *head;
	*head = new_node;
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

void Intersect(Node **head1, Node *head2)
{
	Node *temp=*head1;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next = head2;
}
void CheckIntersection(Node *head1, Node *head2)
{
	unordered_map <Node*,int> lst;

	while(head1!=NULL)
	{
		lst[head1] = 1;
		head1 = head1->next;
	}

	while(head2!=NULL)
	{
		if(lst[head2]==1)
		{
			cout<<"Intersection Node is "<<head2->data<<endl;
			break;
		}
		head2 = head2->next;
	}
}

int main()
{
	Node *head1 = NULL;
	push(&head1,10);
	push(&head1, 20);
	push(&head1, 50);
	push(&head1, 60);
	show(head1);

	Node *head2=NULL;
	push(&head2, 40);
	push(&head2, 30);
	push(&head2, 100);
	show(head2);

	Intersect(&head1, head2);

	show(head1);
	CheckIntersection(head1, head2);

	return 0;
}

// To Compile: g++ -std=c++0x IntersectioPoint.cpp -o IntersectionPoint