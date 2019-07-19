#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    long n=5000000;

	long sieve[n+1];
	for (long i = 0; i < n+1; i++)
	{
		sieve[i]=0;
	}
	for (long i = 1; i < n+1; i=i+2)
	{
		sieve[i]=1;
	}
	sieve[0]=0;
	sieve[1]=0;
	sieve[2]=1;
	for (long i = 3; i < n+1; i=i+2)
		{
		if (sieve[i]!=0)
		{
			for (long j = i*i; j < n+1; j=j+i*2 )
			{
				sieve[j]=0;
			}
		}
	}
	long x,count;
	cin>>x;
	while(x!=0)
	{
	    
	   for(long i=2 ; i< n+1 ; i++)
		{
			if(sieve[i]==1)
			{
			    count=i;
			    x--;
			}
		}
		
	}
	cout<<count;
	return 0;
}