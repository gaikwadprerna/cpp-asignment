#include <iostream>     
#include <cassert>
using namespace std;
int main()
{
    cout<<"Enter any number:\n";
    int val;
    cin>>val;
    assert (val<0); 
    if(val<0)
    {
        cout<<"negative nummber";
    }
    else
    {
        cout<<"not negative number";
    }
    
    return 0;
}