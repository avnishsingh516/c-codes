#include<iostream>
using namespace std;

void reverse(int arr[],int size)
{
	int l=0;
	int r=size-1;

	print(arr)

	while(l<=r)
	{
		swap(arr,l,r);
		l++;
		r--;
	}
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};

	print(arr,5);
	swap(arr,0,4);
	print(arr,5);

	cout<<(sizeof(arr)/sizeof(int));
	 
	 	 return 0;
}	 	 