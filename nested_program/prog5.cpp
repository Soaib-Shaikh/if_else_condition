#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,e;

    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: "; 
    cin>>b;
    cout<<"Enter value of c: "; 
    cin>>c;
    cout<<"Enter value of d: "; 
    cin>>d;
    cout<<"Enter value of e: ";
    cin>>e;

    if(a>=b)
    {
        if(a>=c)
        {
            if(a>=d)
            {
                if(a>=e)
                {
                    cout<<"a is max .";
                }
                else
                {
                    cout<<"e is max .";
                }
            }
            else
            {
                if(d>=e)
                {
                    cout<<"d is max .";
                }
                else
                {
                    cout<<"e is max .";
                }
            }
        }
        else
        {

        }
    }
    else
    {

    }

    return 0;
}