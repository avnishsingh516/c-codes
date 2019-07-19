#include<iostream>
#include<math.h>

using namespace std;

int main() 
{
    int a,b,c,d ;
    float r1,r2;
        cin>>a>>b>>c ;
        d=((b*b)-(4*a*c));
        if(d>0)
        { cout<<"the roots are real and distinct"<<endl;
          r1=((-b)+sqrt(d))/2*a;
          r2=((-b)-sqrt(d))/2*a;
          cout<<"the roots are: "<<r1<<" and "<<r2;

        }
        else if(d==0)
        {cout<<"the roots are real and equal"<<endl;
         r1=(-b)/2*a;
         r1=r2;
         cout<<"the roots are: "<<r1<<" and "<<r2;
        }
        else
        {
            cout<<"the roots are imaginary";
        }
	return 0;
}