#include<iostream>
#include<cassert>
using namespace std;
int factorial(int num)
{
    if(num>1)
    {
        return num* factorial(num-1);
    }
    else 
    {
        return 1;
    }
}
int main()
{
    int num;
    cout<<"Enter number";
    cin>>num;
    assert(num>0);
    cout<<num<<"! is "<<factorial(num);
    return 0;
}