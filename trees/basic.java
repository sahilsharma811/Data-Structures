import java.util.*;
class Node
{
	int data;
	Node left, right;
	public Node(int data)
	{
		this.data = data;
		left = null;
		right = null;
	}
}

class basic
{
	Node root;

	public basic()
	{
		root = null;
	}

	public static void main(String[] args)
	{
		basic tree = new basic();

		tree.root = new Node(10);
		tree.root.left = new Node(20);
		tree.root.right = new Node(30);
		tree.root.left.left = new Node(40);
	}
}