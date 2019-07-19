#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int max=INT_MIN;
	int size;
	cin>>size;
	 int arr[size];
	 for (int i = 0; i < size; i++)
	 {
	 	cin>>arr[i];
	 }
	 for (int i = 0; i < size ; i++)
	 {
	 	if (arr[i]>max)
	 	{
	 		max=arr[i];
	 	}
	 }
	 cout<<endl<<max;
	 return 0;
}