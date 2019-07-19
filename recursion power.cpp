#include <bits/stdc++.h>
using namespace std;
 int power( int n, int p)
 {
 	if(p==0)
 		return 1;
 	if(p%2==0)
 	{
 		int x=power(n,p/2);   /////    its the fastest way to calculate the power of a number ..... rather than normal ...recursion powe.cpp .... method         	
 		return x*x;
 	}
 	else
 	{
 		int y=power(n,p/2);
 		return y*y*n;
 	}
 }

 int main(int argc, char const *argv[])
 {
 	int a,b;
 	cin>>a>>b;
 	cout<<power( a,b );
 	return 0;
 }