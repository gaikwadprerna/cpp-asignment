#include<iostream>
#include<cassert>
using namespace std;
int fib(int x)
{
    if((x==1)||(x==0))
    {
        return x;
    } 
    else
    {
        return (fib(x-1)+fib(x-2));
    }
    
}
int main()
{
    cout<<"Enter any number\n";
    int num,i=0;
    cin>>num;
    assert(num>=0);
    cout<<"series: \n";
    while (i<num)
    {
        cout<<" "<<fib(i);
        i++;
    }  
    return 0;
}