#include<iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int m[6][6];
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cin>>m[i][j];
        }
    }
    
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(m[i][j]==1)
            {
                cout<<(abs(3-i)+abs(3-j));
            }
        }
    }
    
    return 0;
}