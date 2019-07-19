#include<iostream>
using namespace std;

string replaceallpi(string s,string ans)
{
	string result;
	if(s.length()==0)
	{
		return ans;
	}
	char ch=s[0];
	string ros=s.substr(1);
	if(ch=='p' && ros[0]=='i')
	{
		ros=s.substr(2);
		result=replaceallpi(ros,ans + "3.14");
	}
	else
		result=replaceallpi(ros,ans+ch);
	return result;
}

int main()
{
	int n;
	cin>>n;
	while(n>0)
	{
		string s;
		cin>>s;
		cout<<replaceallpi(s,"")<<endl;
		n--;
	}
	return 0;
}