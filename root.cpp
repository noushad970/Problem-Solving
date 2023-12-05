#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        char y=96;
        for(int i=1;i<=8;i++)
        {
            
            int x=s[1]-48;
            
            char z=(char)(i+95);
            y++;
            if(y==s[0])
            continue;
            
            
           
            
            cout<<y<<s[1]<<endl;
            
        }
        for(int i=1;i<=8;i++)
        {
            
            int x=s[1]-48;
            
            char z=(char)(i+95);
         
           
            if(x==i)
            continue;
            
            cout<<s[0]<<i<<endl;
            
            
        }
    }
}