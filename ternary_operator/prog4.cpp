#include<iostream>
using namespace std;

int main()
{

    int num;
    cout<<"Enter num: ";
    cin>>num;

    switch (num)
    {
        case 1:
            cout<<"you entered 1 .";
            break;
        case 2:
            cout<<"you entered 2 .";
            break;
        case 3:
            cout<<"you entered 3 .";
            break;
        default:
            cout<<"wrong input .";
    }
    
    return 0;
}