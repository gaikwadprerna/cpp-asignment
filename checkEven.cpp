#include<iostream>
#include<cassert>
using namespace std;
int main()
{
    cout<<"Enter number:\n";
    int num;
    cin>>num;
    assert(num>0);
    if(num%2==0)
    {
        cout<<num<<" is Even";
    }
    else{
        cout<<num<<" id not even";
    }
    return 0;
}