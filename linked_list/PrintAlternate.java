import java.util.*;
class PrintAlternate
{
	class Node
	{
		int data;
		Node next;
		Node(int data)
		{
			this.data = data;
			next = null;
		}
	}
	Node head;
	Node ptr;
	public void push(int data)
	{
		Node node = new Node(data);
		node.next = head;
		head = node;
	}

	public void show()
	{
		Node ptr = head;
		while(ptr!=null)
		{
			System.out.print(ptr.data+" -> ");
			ptr = ptr.next;
		}
		System.out.println("null");
	}

	public void print_alternate(boolean chk)
	{
		if (ptr==null)
		{
			System.out.println("null");
			return;
		}
		if (chk)
		{
			System.out.print(ptr.data+" -> ");
		}
		ptr = ptr.next;
		print_alternate(!chk);
		return;
	}
	public void get_head()
	{
		ptr = head;
	}
	public static void main(String[] args)
	{
		PrintAlternate list = new PrintAlternate();

		System.out.print("Enter the length of Linked List: ");
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();

		for(int i=0; i<n; i++)
		{
			System.out.print("Enter Element: ");
			int data = sc.nextInt();
			list.push(data);
		}

		list.show();
		list.get_head();
		list.print_alternate(true);
	}
}