#include <bits/stdc++.h>
using namespace std;

void printd(int n){
	if(n==0)
		return;
	cout<<n<<endl;
	printd(n-1);
}

void printi( int n)
{ 
	if(n==0)
	 return;
	printi(n-1);  // print (n-1) is here for increasing order 
	cout<<n<<endl;
	// put  print (n-1)  for decresing order
}

int main()
{
	 int n;
	cin>>n;
	cout<<" increasing************"<<endl;
	printi(n);
	cout<<" decresing*************"<<endl;
	printd(n);
	return 0;
}