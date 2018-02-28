class ReverseKNodes
{
	Node head;

	class Node
	{
		int data;
		Node next;

		Node(int data)
		{
			this.data = data;
			next=null;
		}
	}

	public void push(int data)
	{
		Node n = new Node(data);
		n.next = head;
		head = n;
	}

	public void show()
	{
		Node ptr = head;
		while(ptr!=null)
		{
			System.out.print(ptr.data+" -> ");
			ptr = ptr.next;
		}
		System.out.println("NULL");
	}

	public Node reverse(Node head, int k)
	{
		Node current = head;
		Node prev = null;
		Node next = null;
		int count = 0;
		while(current!=null && count<k)
		{
			next = current.next;
			current.next = prev;
			prev = current;
			current = next;
			count++;
		}
		if(next!=null)
			head.next = reverse(next, k);
		return prev;
	}

	public static void main(String[] args)
	{
		ReverseKNodes list = new ReverseKNodes();
		list.push(13);
		list.push(2);
		list.push(15);
		list.push(10);
		list.push(23);
		list.push(5);
		list.push(1);
		list.push(55);
		list.push(28);

		System.out.println("Initial List");
		list.show();

		list.head = list.reverse(list.head,3);

		System.out.println("Reversed List");
		list.show();
	}
}