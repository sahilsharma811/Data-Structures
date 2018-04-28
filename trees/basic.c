#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node * NewNode(int data)
{
	struct node *n = (struct node*)malloc(sizeof(struct node));
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	return n;
}
int main()
{
	struct node *root = NewNode(10);
	root->left = NewNode(20);
	root->right = NewNode(30);
	return 0;
}