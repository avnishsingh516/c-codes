#include <bits/stdc++.h>
using namespace std;

bool fun( int arr[] , int size , int i)
{
	if(i==(size-1))                                                          
		return true;
	if(arr[i]>arr[i+1])
	    return false; 
	bool x=fun(arr,size,i+1);
	return x;

}
 int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for( int i=0 ; i<n ; i++)
		cin>>arr[i];

	if(fun(arr,n,0)==1)
		cout<<" sorted array"<<endl;
	else
		cout<<" unsorted ARRAY"<<endl;

	return 0;
}