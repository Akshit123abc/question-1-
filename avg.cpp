#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    int x;
    for(int i=0;i<10;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    int sum=0;
    for(auto it:v)
    {
        sum+=it;
    }
    cout<<sum/10;
    return 0;
    
}