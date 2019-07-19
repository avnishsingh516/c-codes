#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string str;
	cin>>str;
	int x=str.length()-1;
	int a;
	for (int i = 0; i <= x ; i++)
	{
		if(islower(str[i]))
		{
			// a=str[i];
			// a=a-32;
			// str[i]=a;
			str[i]=toupper(str[i]);
		}
		else
		{
		// 	a=str[i];
		// 	a=a+32;
		// 	str[i]=a;
			str[i]= tolower(str[i]);

		}

	}
	cout<<str;
	return 0;
}