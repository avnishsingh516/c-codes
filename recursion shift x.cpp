#include <iostream>
using namespace std;

string duplicate( string s )    /////// we can also use the s.size() for find the lenght of string//////
{
	if (s.length()==0)
	{

		return "";
	}
	char ch=s[0];
	string ros=s.substr(1);
	string result=duplicate(ros);
	if (ch=='x')              
		return result+ch;

	return ch+result;
}

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
    cout<<duplicate( s);
	return 0;
}