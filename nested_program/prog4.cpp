#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;

    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Emter value of b: ";
    cin>>b;
    cout<<"Enter value of c: ";
    cin>>c;
    cout<<"Enter value of d: ";
    cin>>d;

    if (a<=b)
    {
        if(a<=c)
        {
            if(a<=d)
            {
                cout<<"a is min .";
            }
            else
            {
                cout <<"d is min .";
            }
        }
        else
        {
            if(c<=d)
            {
                cout<<"c is min .";
            }
            else
            {
                cout<<"d is min .";
            }
        }
    }
    else
    {
        if(b<=c)
        {
            if(b<=d)
            {
                cout<<"b is min .";
            }
            else
            {
                cout<<"d is min .";
            }
        }

        else
        {
            if(c<=d)
            {
               cout<<"c is min ." ;
            }
            else
            {
                cout<<"d is min .";
            }
        }
    }


    return 0;
}