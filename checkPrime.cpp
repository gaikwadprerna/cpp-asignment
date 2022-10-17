#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter number";
    int val,temp=0;
    cin>>val;

    for(int i=2;i<val;i++)
    {
        if(val%i==0)
        {
            temp=1;
        }
    }
    if(temp==0)
    {
        cout<<"number is prime";
    }
    else
    {
        cout<<"number is not prime";
    }
    return 0;
}