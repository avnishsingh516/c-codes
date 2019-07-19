#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, count=0;
	cin>>n;
	while(n!=0)
	{
		n=n&(n-1);
        count++;
	}
     cout<<count;
	return 0;
}