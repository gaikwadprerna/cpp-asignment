#include <iostream>
using namespace std;
int main()
{
    cout << "Enter two number\n";
    int a, b;
    cin >> a >> b;
    if (a % b == 0)
    {
        cout<<a<<" is divisibke by "<<b;
    }
    else
    {
        cout<<"not divisible";
    }

    return 0;
}