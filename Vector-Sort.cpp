#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    int k, size;
    vector<int>vec;
    cin >> size;
    for(int i=0; i<size; i++)
    {
        cin >> k;
        vec.push_back(k);
    }
    sort(vec.begin(),  vec.end());
    for(int i=0;i<vec.size();i++)
    {
        cout << vec[i] << " ";
    }
    return 0;
}
