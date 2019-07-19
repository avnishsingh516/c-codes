#include <bits/stdc++.h>
using namespace std;

int p(int n,int power)
{
	if(power==0)
		return 1;
	int pw=p(n,power-1);
	int total=n*pw;
	return total;
}

int main(int argc, char const *argv[])
{
	cout<<p(5,3);
	return 0;
}