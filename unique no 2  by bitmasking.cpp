#include <bits/stdc++.h>
using namespace std;

int main()
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
         x=x^a[i];
                      // ^ is the bitwise XOR operator // 
    }
    int y=x;
    int counter=0;
    while(1)
    {
         if(y&1)
         {
            counter++;
            break;
         }
         else
         {
         	counter++;
         	y=y>>1;
         }

    }
    int left=x , right=x ; 
    for (int i = 0; i < n; i++)
    {
    	int e=a[i];
    	e=e>>counter-1;
    	if(e & 1)
    	{
    		left=left^a[i];
    	}
    	else
    	{
    		right=right^a[i];
    	}
    }

	cout<<endl<<left<<endl<<right;
	return 0;
}