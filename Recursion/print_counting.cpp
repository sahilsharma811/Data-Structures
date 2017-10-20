#include<iostream>
using namespace std;

void print_down(int p)
{ 
 if (p==0) 
	return;
 cout<<p<<' ';
 print_down(p-1);
 return;
}

//An example to print counting up:
void print_up(int p)
{ 
 if (p==0) 
  return; 
 print_up(p-1); 
 cout<<p<<' '; 
 return; 
}

int main()
{
	print_up(10);
	cout<<endl;
	print_down(10);
	return 0;
}