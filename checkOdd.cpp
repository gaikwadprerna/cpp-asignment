#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter any one number to check it is odd or not? :\n";
    int num;
    cin>>num;
    if(num%2!=0)
    {
        cout<<"odd number\n";
    }
    else
    {
        cout<<"not odd";
    }
    return 0;
}