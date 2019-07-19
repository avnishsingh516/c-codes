#include<iostream>
using namespace std;


void swap(int arr[],int a, int b)
{
	int temp;
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

void display(int arr[],int n){
 	for(int i=0;i<n;i++)
     	cout<<arr[i]<<" ";

     cout<<endl;
 }


int main()
{
	int arr[]={0,1,0,2,1,0,2,1,0};
	int arrlen=sizeof(arr)/sizeof(int);
    int low=0;
    int mid=0;
    int high=8;
    display(arr,9); 
	{
	    while(mid<=high)
		if(arr[mid]==0)
		{
			swap(arr,mid,low);
			low++;
			mid++;
		}
		else if(arr[mid]==1)
		{
			mid++;

		}
		else if(arr[mid]==2)
		{
			swap(arr,mid,high);
			high--;
		}
	}
     
     display(arr,9);
	 
	 return 0;
}
