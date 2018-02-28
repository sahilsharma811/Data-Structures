class ReverseList
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

	public void reverse()
	{
		Node current = head;
		Node prev = null;
		Node next = null;

		while(current!=null)
		{
			next = current.next;
			current.next = prev;
			prev = current;
			current = next;
		}
		head = prev;
	}

	public static void main(String[] args)
	{
		ReverseList list = new ReverseList();
		list.push(13);
		list.push(2);
		list.push(15);
		list.push(10);
		list.push(23);
		list.push(5);

		System.out.println("Initial List");
		list.show();

		list.reverse();

		System.out.println("Reversed List");
		list.show();
	}
}