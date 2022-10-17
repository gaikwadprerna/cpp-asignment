#include <iostream>     
#include <cassert>
using namespace std;
int main()
{
    cout<<"Enter any number:\n";
    int val;
    cin>>val;
    assert (val>=0);
    
    if(val>=0)
    {
        cout<<"POsitive nummber";
    }
    else
    {
        cout<<"not positive number";
    }
    
    return 0;
}