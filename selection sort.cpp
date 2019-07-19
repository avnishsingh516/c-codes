#include<iostream>
using namespace std;

void sort (int arr[],int i,int j)

	{for (i = 0; i < 8; ++i)
	{
		
	    for ( j =  i+1; j < 9; j++)
	     {
	     	if(arr[i]>arr[j]){
	     		int temp=arr[i];
		         arr[i]=arr[j];
		         arr[j]=temp;
	     	}
	     }

		
    }

 void display(int arr[],int n)
 {
     for(int i=0;i<n;i++)
     	cout<<arr[i]<<" ";

     cout<<endl;
 }

int main()
{
	
	int arr[]={7,8,9,4,5,6,1,2,3};
     display(arr,9);
	
	    display(arr,9);
	    cout<<"******************************"<<endl;
	} 
	 return 0;
}