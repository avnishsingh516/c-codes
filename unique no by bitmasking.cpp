#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n ; i++)
	{
		cin>>a[i];
	}
	int x=a[0];
	for (int i = 1; i < n ; i++)
	{
         x=x^a[i];             // ^ is the bitwise XOR operator // 
    }
	cout<<endl<<x<<endl;
	return 0;
}