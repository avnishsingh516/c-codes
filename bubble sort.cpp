#include<iostream>
using namespace std;

void swap(int arr[],int i,int j)

	{int temp=arr[i];
		 arr[i]=arr[j];
		 arr[j]=temp;
    }

 void display(int arr[],int n)
 {
     for(int i=0;i<n;i++)
     	cout<<arr[i]<<" ";

     cout<<endl<<endl;
 }

int main()
{
	int counter=1;
	int arr[]={9,5,6,5,7,4,1,2,3,6,7,4,1};
     display(arr,13);

	while(counter<13)
	   { for (int i = 0; i < 13 - counter; i++)
	     {
	     	if(arr[i]>arr[i+1])
	     		{swap(arr,i,i+1);
                }
	     }
	    display(arr,13);
	    cout<<"******************************"<<endl;
	    counter++;
	   } 
	 return 0;
}