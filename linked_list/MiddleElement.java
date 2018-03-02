import java.util.*;
class MiddleElement
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

	public void print_middle()
	{
		if(head==null)
		{
			System.out.println("Linked List null");
			return;
		}
		Node slow_ptr = head;
		Node fast_ptr = head;

		while(fast_ptr!=null) // For Even Length
		{
			if (fast_ptr.next!=null) // For Odd Length
			{
				fast_ptr = fast_ptr.next.next;
				slow_ptr = slow_ptr.next;
			}	
			else
				break;
		}
		System.out.println("Middle Element is: "+ slow_ptr.data);
	}
	public static void main(String[] args)
	{
		MiddleElement list = new MiddleElement();

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
		list.print_middle();
	}
}	