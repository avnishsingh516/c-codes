#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	// cout<<s.substr(1,3)<<endl;
	int n=s.length()-1;
	for( int x=0 ; x<=n ; x++)
	{
		for (int j = 1 ; j <= n; j++)  //j=x
		{
			cout<<s.substr(x,j);
			// for( int k=x ; k<=j ; k++)
			// cout<<s[k];
		             cout<<endl;
		}
	}
	return 0;
}