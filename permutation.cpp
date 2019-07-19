#include<iostream>
using namespace std;

 string pi( string s, int n)
 {
     if(s.length()==0)
      return s;
      
     string res=pi(s , n+1);
     if(res=="pi")
     {
         res=res.substr(0,n)+"3.14"+res.substr(n+2);
     }
  return res;
 }
int main() {
        string s;
        cin>>s;
        cout<<pi(s,0)<<endl;
	return 0;
}