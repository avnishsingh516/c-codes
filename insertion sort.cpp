#include<iostream>
using namespace std;

void sort (int arr[],int i,int j)

	{int temp=arr[i];
		 arr[i]=arr[j];
		 arr[j]=temp;
    }

 void display(int arr[],int n){
 	for(int i=0;i<n;i++)
     	cout<<arr[i]<<" ";

     cout<<endl;
 }

int main()
{
	int counter=1;
	int arr[]={7,8,9,4,5,6,1,2,3};
     display(arr,9);
	while(counter<9){
	    for (int i = counter; i > 0; i--)
	     {
	     	if(arr[i-1]>arr[i])
	     		swap(arr,i-1,i);
	     	else
	     		break;

	     }
	    display(arr,9);
	    cout<<"******************************"<<endl;
	    counter++;
	  } 
	 return 0;
}