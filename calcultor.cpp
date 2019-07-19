#include<iostream>
using namespace std;

void operation(char ch) {
   int res = 0;
    int a,b;
       cin>>a;
       cin>>b;
    switch (ch) {
    case '+': {
        res = a + b;

        break;
    }
    case '-': {
        res = a - b;

        break;
    }
    case '*': {
        res = a * b;

        break;
    }
    case '/': {
        
        res = a / b;
        break;
        }
        
    case '%': {
        
        res = a % b;
        break;
       
    }
    }
    
    cout<<res<<endl;
}


int main() {
    char ch;
    do {

        cin>>ch;  // Use cin in case of c++
        if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '%') {

            operation(ch);

        } else {
            if (ch != 'x' && ch != 'X')
                cout<<"Invalid operation. Try again."<<endl;
        }

    } while (ch != 'x' && ch != 'X');
    return 0;
}

 