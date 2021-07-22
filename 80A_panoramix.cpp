#include<iostream>
#include <cstdlib>
#include<string>
using namespace std;

bool checkPrime(int n)
{
    bool flag=true;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
    }
    return flag;
}

int main()
{
    int m,n,prime;
    cin>>n>>m;
    for(int i=n+1;i<=50;i++)
    {
        if(checkPrime(i))
        {   
            prime=i;
            break;
        }

    }
    if(m==prime)
        cout<<"YES";
    else
        cout<<"NO";
    
    return 0;
}