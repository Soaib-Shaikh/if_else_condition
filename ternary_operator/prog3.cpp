#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"Enter value of c: ";
    cin>>c;

    a>=b 
        ?
         a>=c 
            ? cout<<"a is max ."
            :
              cout<<"c is max"
        : 
         b>=c 
            ? 
             cout<<"b is max ."
            :
             cout<<"c is max .";        
    return 0;
}