#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
 {
 	int n;
 	cin>>n;
 	for (int i = 0; i < n; i++)
 	{
 		char ch='A';
 		for (int j = 0; j < n-i; j++)
 		{
 			cout<<ch;
 			ch++;

 		}
 		cout<<ch<<endl;
 	}
 	return 0;
 } 