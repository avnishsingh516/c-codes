#include <bits/stdc++.h>
using namespace std;

string keypad[]={ " ",".","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void key( string s , string ans)
{
	if (s.length()==0)
	{ 
		cout<<ans<<endl;
		return;
	}
	char ch=s[0];
	string code=keypad[ch-'0'];
	string ros=s.substr(1);        /////////here in substring 2 and 3 are seperated not the abc or anything else.........
	for (int i = 0; i < code.length(); i++)
	{
		key(ros,ans+code[i]);
	}
	
    
}

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	key(s,"");
	return 0;
}