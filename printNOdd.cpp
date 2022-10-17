#include<iostream>
#include<cassert>
using namespace std;
int main()
{
    cout<<"Enter any number:\n";
    int num;
    cin>>num;
    assert(num>0);
    int temp=1,i=0;
    while(i<num)
    {
        if(temp%2!=0)
        {
            cout<<temp<<" ";
            i++;
        }
        temp++;
    }

    return 0;
}