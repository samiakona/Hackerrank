#include<iostream>
using namespace std;
int main()
{
    int a1,a2,a3,b1,b2,b3;
    cin >> a1 >> a2 >> a3;
    cin >> b1 >> b2 >> b3;
    int A=0,B=0;
    if(a1>b1)
    {
        A++;
    }
    else if(b1>a1)
    {
        B++;
    }
    if(a2>b2)
    {
        A++;
    }
    else if(b2>a2)
    {
        B++;
    }
    if(a3>b3)
    {
        A++;
    }
    else if(b3>a3)
    {
        B++;
    }
    cout << A << " " << B;
    return 0;
}
