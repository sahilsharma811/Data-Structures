import java.util.*;
class ReverseUsingRecursion
{
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
	Node head;

	public void push(int data)
	{
		Node n = new Node(data);
		n.next = head;
		head = n;
	}

	public void show()
	{
		Node tmp = head;
		while(tmp!=null){
			System.out.print(tmp.data+" -> ");
			tmp = tmp.next;
		}
		System.out.println("null");
	}

	public void Reverse(Node tmp)
	{
		if(tmp==null)
			return;
		Reverse(tmp.next);
		System.out.print(tmp.data+" -> ");
		return;
	}

	public static void main(String[] args)
	{
		ReverseUsingRecursion list = new ReverseUsingRecursion();
		System.out.print("Enter number of Elements in List: ");
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();

		for(int i=0; i<n; i++)
		{
			System.out.print("Enter Value: ");
			int data = sc.nextInt();
			list.push(data);
		}
		list.show();
		list.Reverse(list.head);
		System.out.println("null");
		list.show();
	}
}