#include<iostream>
#include <cstdlib>
#include<string>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    char q[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>q[i];
    }
    
    for(int i=1;i<=t;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(q[j]=='B'&& q[j+1]=='G')
            {
                swap(q[j],q[j+1]);
                j++;
            }
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        cout<<q[i];
    }
    
    
    return 0;
}