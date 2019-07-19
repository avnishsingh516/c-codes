// #include<iostream>
// using namespace std;

// int main()
// {
// 	int c2,n;
// 	cin>>n;
// for(int i=0;i<n;i++)
//   {    int c1=1;
// 	for(int s=1;s<n-i;s++)
// 	{	cout<<" ";
// 	}
// 	 for(int j=0;j<=i;j++)
// 		{
// 			cout<<" "<<c1;
// 			c1=(c1*(i-j))/(j+1);   

// 		}
//             cout<<endl<<endl;
// }	 
//      cout<<endl;
// 	 return 0;
// }
    


//..........................................................ALTERNATE METHOD :- WITHOUT USING FORMULAE................................................................




#include <iostream>
using namespace std;

int main()
{
    int rows, coef = 1;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 0; i < rows; i++)
    {
        for(int space = 1; space <= rows-i; space++)
            cout <<"  ";

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                coef = 1;
            else
                coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;
    }

    return 0;
}