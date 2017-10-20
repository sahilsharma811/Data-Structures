#include<iostream>
using namespace std;
void counter(int count)
		{
			if (count==0)
				return;
			else
			{
				cout<<count<<endl;
				count--;
				counter(count);
			}

		}
int main()
{
	counter(100);
	return 0;
}