#include<iostream>
using namespace std;

int main()
{
	int arr[4][3]={{1,2,3},
	               {4,5,6},
	               {7,8,9},
	               {10,11,12}};
	int fr=0,fc=0,lc=3,lr=4;

	while( (fr<lr)&&(fc<lc))
	{
		for( int i=fc;i<4;i++)
		{
			cout<<arr[fr][fc];
			
		}
		fr++;
		for( int i=;i<5;i++)
		{
			cout<<arr[i][lc];
			
		}
		lc--;
		for (int i = lr ; i>0; i--)
			{
				/* code */
			}	
	}	 
	 return 0;
		
		
}