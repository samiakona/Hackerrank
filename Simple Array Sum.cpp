#include<iostream>
using namespace std;
int main()
{
    int N,i,sum=0;
    int arr[1000];
    cin >> N;
    for(i=0; i<N; i++)
    {
        cin>> arr[i];
        sum=sum+arr[i];
    }
    cout << sum;

    return 0;
}
