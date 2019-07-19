#include <bits/stdc++.h>
using namespace std;

string INTTOSTRING( int a)
{
	ostringstream temp;
	temp<<a;
	return temp.str();
}

 void subsequence( string s, string ans )    /////// we can also use the s.size() for find the lenght of string//////
{
	if (s.length()==0)
	{ 
		cout<<ans<<endl;
		return;
	}
	char ch=s[0];
	int y=s[0];
	string ros=s.substr(1);

	subsequence(ros,ans+ch);
	subsequence(ros,ans);
	//subsequence(ros, ans + to_string((int)ch));         <<<<--------     // direct convet the ascii code to string // but is not available in old version of c++ compiler // which is mine                                   
    
    //to_string is called by header file <sstream>///
	subsequence(ros,INTTOSTRING((int)ch));
    return ;
}

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
    subsequence( s ,"");
	return 0;
}