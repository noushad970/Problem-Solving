#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[8][8];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                cin>>a[i][j];
            }
        }
        int ans1=0,ans2=0;
        int i,j;
        for(i=0;i<8;i++)
        {
            
            for(j=0;j<8;j++)
            {
                if(a[i][j]=='#' && a[i][j+2]=='#' && a[i+1][j+1]=='#')
                {
                    ans1=i+2;
                    ans2=j+2;
                }
            }
            
        }
        cout<<ans1<<" "<<ans2<<endl;

    }
}