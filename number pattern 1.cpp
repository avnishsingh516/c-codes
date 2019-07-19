#include<iostream>
using namespace std;

int main()
{
	int s,no,i,n;
	cout<<"no of rows";
	cin>>n;
for(i=1;i<=n;i++)
  
{
	for(s=1;s<=n-i;s++)
		cout<<" ";
	
		for(no=1;no<=2*i-1;no++)
			cout<<no;
            cout<<endl;
	}

	 
	 return 0;
}