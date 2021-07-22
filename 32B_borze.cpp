#include<iostream>
#include <cstdlib>
#include<string>
using namespace std;
int main()
{
    string b;
    cin>>b;
    for(int i=0;i<b.length();i++)
    {
        if(b[i]=='-')
        {
            if(b[i+1]=='.')
            {
                cout<<1;
                i++;
            }
            else if(b[i+1]=='-')
            {
                cout<<2;
                i++;
            }
        }
        else if(b[i]=='.')
        {
            cout<<0;
        }
    }
    
    
    
    return 0;
}