#include<iostream>
using namespace std;

int main()
{
    int a=100, b=200, c=1050;

    if (a>=b && a>=c)
    {
        cout <<"a is max .";
    }
    else if (b>=c)
    {
        cout <<"b is max .";
    }
    else 
    {
        cout <<"c is max .";
    }

    return 0;
}