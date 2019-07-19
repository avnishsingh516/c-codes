#include <iostream>
using namespace std;

int no (int s, int e )
{
    if(s==e)
    	return 1;
    if (s>e)
       return 0;

   int count=0;
   for (int i = 1; i <=6; i++)
     count+=no(s+i,e);

 return count;
}

int main(int argc, char const *argv[])
{
    cout<<no(0,10);
	return 0;
}