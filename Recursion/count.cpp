#include<iostream>
using namespace std;
void counter(int count)
{
  if (count==0)
	return;
  else
  {
	count--;
	counter(count); // goes till the end(1).. then control returns and prints the value of count 
	cout<<count<<endl;
  }
}
int main()
{
	counter(100);
	return 0;
}
