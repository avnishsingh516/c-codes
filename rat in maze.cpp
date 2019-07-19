#include <iostream>
using namespace std;

bool issafe( int maze[4][4], int row , int col)
{
	if(row<4 && col<4 && maze[row][col]!=1)
		return 1;
	return 0;
}

bool ratmaze( int maze[4][4], int row , int col  , int sol[4][4] )
{
	if( row ==3 && col==3)
		return 1;
    if(issafe(maze , row , col))
    	{
    		sol[row][col]=1;
            if( ratmaze(maze, row , col+1, sol))
            	return 1;
            if( ratmaze(maze, row+1 , col  , sol))
            	return 1;

            sol[row][col]=0;
            return 0;

        }
        return 0;

}
int main(int argc, char const *argv[])
{
	int arr[4][4]={{0,0,0,0},
                   {0,0,1,1},
                   {0,1,0,0},
                   {0,0,0,0}};

	6otyint sol[4][4]={0};

     if(ratmaze(arr , 0,0, sol))
    {
    	cout<<" path exist"<<endl;
    	for (int i = 0; i < 4; i++)
    	{
    		for (int j = 0; j < 4; j++)
    		{
    			cout<<sol[i][j]<<" ";
    		}
    		cout<<endl;
    	}
    }
    else
    {
    	cout<<" path does not exist";
    }
  return 0;
}
