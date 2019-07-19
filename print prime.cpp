#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	unsigned long long a,b,n;
	cin>>n>>a>>b;
	unsigned long long sieve[n+1];
	for (unsigned long long i = 0; i < n+1; i++)
	{
		sieve[i]=0;
	}
	for (unsigned long long i = 1; i < n+1; i=i+2)
	{
		sieve[i]=1;
	}
	sieve[0]=0;
	sieve[1]=0;
	sieve[2]=1;
	for (unsigned long long i = 3; i < n+1; i=i+2)
		{
		if (sieve[i]!=0)
		{
			for (unsigned long long j = i*i; j < n+1; j=j+i*2 )
			{
				sieve[j]=0;
			}
		}
	}
	
	for(unsigned long long i=a ; i<=b ; i++)
		{
			if(sieve[i]==1)
			cout<<i<<", ";
		}
	return 0;
}