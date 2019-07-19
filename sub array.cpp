#include<iostream>
#include<climits>
using namespace std;

int main()
{
	// arr[]={-1,2,3,-4,4};
	// for(int i=0;i<5;i++)
	// {
	// 	for(int j=i;j<5;j++)

 //          { int sum=0;

 //             for (int k=i;k<=j; k++)
             
 //             {
	// 	    	// cout<<arr[k]<<" ";
	// 	    	sum+=arr[k];
	// 	     }
	// 	    	if(sum>max)
	// 	    		max=sum;

		
	//       }
	//  }
	//  cout<<max;


	//...........................(USING 2 LOOPS)..ALTERNATE METHOD FOR FINDING THE MAX SUM OF SUB ARRAY................................................................................... 



    int arr[6]={1,-2,8,-4,-1,7};
    // int cumsum[6]={0};
    // cumsum[0]=arr[0];
    // int max=INT_MIN;
    //  for (int i = 1; i < 6; i++)
    //  {
    //  	cumsum[i]=cumsum[i-1]+arr[i];
    //  }
    //  for (int i = 0; i < 6; i++)
    //  {
    //  	for (int j = i; j< 6; j++)
    //  	{    
    //  		 int x=cumsum[j]-cumsum[i-1]; 
    //         {
    //         	if(x>max)
    //         	max=x;
    //         }

    //  	}
    //  }
    //  cout<<max<<endl;




    	//...........................(USING 1 LOOPS)..ALTERNATE METHOD FOR FINDING THE MAX SUM OF SUB ARRAY................................................................................... 

    int currsum=0,max=0;
    for (int i = 0; i < 6; ++i)
    {
          currsum+=arr[i];
          if (currsum<0)
          {
          	currsum=0;
          }
          if(currsum>max)
          {
          	max=currsum;
          }

    }
    cout<<max;
      
	 return 0;
}