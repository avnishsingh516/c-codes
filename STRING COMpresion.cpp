#include<iostream>
using namespace std;

 int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int a[256]={0};
	int x= s.length()-1;
	int b=0;
	for( int i=0 ; i<=x ; i++)
	{
		if(s[i]==s[i+1])
		{
			b=s[i];
			a[b]+=1;
		}
		// char ch=str[i];
		// a[ch]++;

	}
	int max=0;
	char ch;
     for( int i=0 ; i<256 ; i++)
     {
     	if(a[i]>max)
     		{
     			max=a[i];
     	        ch=i;
     	    }

     }
      cout<<ch<<"  "<<max+1;
	return 0;
}