#include <bits/stdc++.h>
using namespace std;

int  ls( int arr[] , int size , int i , int var)
{
	if(i==size)                                                       
		return (-1);

	// //if(arr[i]==var)           for output of 1 st index//
	// //    return i ;
	 
	// int x=ls(arr,size,i+1 , var);
	// return x; 




	int x= ls(arr,size,i+1,var);

	if (x!=-1)
		return x;
	else
	{
	  if (arr[i]==var)                     //for output of last index
		return i;
	  else
		return -1;
   }
}
 int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for( int i=0 ; i<n ; i++)
		cin>>arr[i];
	int t;
	cin>>t;
    int x=ls(arr, n ,0 , t);
    cout<<x<<endl;
	

	return 0;
}