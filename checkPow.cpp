#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout<<"Enter two number:\n";
    int a,b,res=1;
    cin>>a>>b;
    for(int i=0;i<b;i++)
    {
        res=a*res;;
    //    cout<<a;
    }
    //res=pow(a,b);
    cout<<res;
    return 0;
}