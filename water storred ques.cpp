#include <iostream>
using namespace std;
int main()
{
	int arr[]={2,4,5,2,3,2,1,3,2,6,2,1,3};
	int arrlen=sizeof(arr)/sizeof(int);
	int lmax[arrlen];
	int rmax[arrlen];
	int left = arr[0];
	int right = arr[arrlen-1];

	for (int i = 0; i < arrlen; i++)
	{
		if (left<arr[i])
		{
			left=arr[i];
		}
		lmax[i]=left;
	}
	for (int i = arrlen-1; i >=0 ; i--)
	{
		if (right<arr[i])
		{
			right=arr[i];
		}
		rmax[i]=right;
	}

	int water=0;

	for (int i = 0; i < arrlen ; i++)
	{
		water+=min(lmax[i],rmax[i])-arr[i];
	}
     cout<<water<<endl;
	return 0;
}