#include<iostream>
#include <cstdlib>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;


    int heights[n];
    for(int i=0;i<n;i++)
    {
        cin>>heights[i];
    }


    int max=heights[0];
    int min=heights[0];  
    int maxindex=0,minindex=0;
    for(int i=0;i<n;i++)
    {
        if(heights[i]<=min)
        {
            min=heights[i];
            minindex=i;
        }
        if(heights[i]>max)
        {
            max=heights[i];
            maxindex=i;
        }
    }
    
    int sec;
    if(maxindex<minindex)
        sec=maxindex+(n-1)-minindex;
    else
        sec=maxindex+(n-2)-minindex;

    cout<<sec;

    return 0;
}