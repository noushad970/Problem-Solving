#include<iostream>
#include<math.h>
#include<bits/stdc++.h>


using namespace std;


bool isPrime(int n)
{
    bool ans=true;
    if(n==0||n==1)
    ans=false;
    
    for(int i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {ans=false;
        break;}
    }
    return ans;

}


int main()
{

int t;
cin>>t;
while(t--)
{
    string a,b;
    cin>>a>>b;
    int ans=0;
    for(int i=0;i<a.length()-1;i++)
    {
        if(a[i]=='1')
    ans++;
    }
    for(int i=0;i<b.length()-1;i++)
    {
        if(b[i]=='1')
    ans++;
    }
    if(ans%2==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}

}