#include<iostream>
using namespace std;
int main()
{
    int i, k;
    cin>>k;
    int ar[k];

    for(i=0;i<k;i++)
    {
        cin>> ar[i];
    }
    for (i=k-1;i>=0;i--)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
