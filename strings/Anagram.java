// Anagram: Two strings having same characters but different words
import java.io.*;
import java.util.*;
class Anagram
{
	public static void main(String[] agrs)
	{
	Scanner sc = new Scanner(System.in);

	System.out.println("Utility to check if Two Strings are Anagrams.");

	System.out.print("Enter First String: ");
	String st1=sc.nextLine();

	System.out.print("Enter Second String: ");
	String st2=sc.nextLine();

	int arr1[] = new int[256];
	int arr2[] = new int[256];
	Arrays.fill(arr1, 0);
	Arrays.fill(arr2, 0);

	for(int i=0; i<st1.length(); i++)
		{arr1[st1.charAt(i)]++;}

	for(int i=0; i<st2.length(); i++)
		{arr2[st2.charAt(i)]++;}

	int flag=1;
	for(int i=0; i<256; i++)
	{
		if(arr1[i]!=arr2[i])
		{
			flag=0;
			break;
		}
	}

	if(flag==1)
	{
		System.out.println("Strings are Anagram");
	}
	else
	{
		System.out.println("Strings are Not Anagram.");	
	}
	}
}