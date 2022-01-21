#include <bits/stdc++.h>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,i;
    long long int a[10],sum=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >>a[i];
        sum+=a[i];
    }
    cout << sum;
    return 0;
}
