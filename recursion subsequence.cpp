#include <iostream>
using namespace std;

void subsequence( string s, string ans )    /////// we can also use the s.size() for find the lenght of string//////
{
	if (s.length()==0)
	{
		cout<<ans<<endl;
		return;
	}
	char ch=s[0];
	string ros=s.substr(1);

	subsequence(ros,ans);
	subsequence(ros,ans+ch);
    return ;
}

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
    subsequence( s ,"");
	return 0;
}