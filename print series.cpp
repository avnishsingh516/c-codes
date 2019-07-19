#include<iostream>
using namespace std;
int print(int c,int d)
{
    int n,i=1;
    while(i<=c)
     {
         n=((3*i)+2);
        
         if ((n%d)!=0)
         cout<<n<<endl;
          i++;
     }
     return 0;
}
int main() {
    int a,b;
    cin>>a>>b;
    print(a,b);
	return 0;
}