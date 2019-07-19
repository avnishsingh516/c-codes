#include <iostream>
using namespace std;

int main()
{
	int a=0,b=1,c,n;
	cout<<"enter the no";
	cin>>n;
	cout<<"0 1 ";
	int i=2;
	while(i<n)
	{
		c=a+b;
		cout<<c<<" ";
		a = b;
		b = c;
		c = a + b;

		i++;


	}
	return 0;
}