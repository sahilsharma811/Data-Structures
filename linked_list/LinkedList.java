/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class LinkedList
{
    Node head;
    
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
    
    public void push(int data)
    {
        Node new_node = new Node(data);
        new_node.next = head;
        head = new_node;
    }
    
    public void show(Node ptr)
    {
        Node tmp = ptr;
        while(tmp!=null)
         {
             System.out.print(tmp.data+" -> ");
             tmp = tmp.next;
         }
        System.out.println(" NULL");
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		LinkedList list = new LinkedList();
		
		list.push(10);
		list.push(20);
		list.push(5);
		
		list.show(list.head);
	}
}
