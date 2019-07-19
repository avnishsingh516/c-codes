#include<iostream>
using namespace std;

int main()
{
	int n,p,t=0;
	float ans=0;
	float inc=1;

	cout<<"enter the the no and upto its decimal place";
	cin>>n>>p;

	while(t<=p){

	 while(ans*ans<=n){
        ans=ans+inc;
      }

	 ans = ans - inc;
	 inc=inc/10;
	 t=t+1;
    }

      cout<<ans<<endl;


	 return 0;
}