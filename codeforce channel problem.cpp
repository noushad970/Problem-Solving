#include<iostream>
#include<bits/stdc++.h>

using namespace std;
  
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int n,a,q;
    string arr;
    cin>>n>>a>>q;
    cin>>arr;
    int ans=a;
    int x=a;
    int ans2=0;
    for(int i=0;i<q;i++)
    {
        if(arr[i]=='+')
        {
            ans++;
            x++;
            if(ans==n)
            ans2++;
        }
        else if(arr[i]=='-')
        ans--;
    }
    if(a==n)
    cout<<"YES"<<endl;
    else if(ans>=n)
    cout<<"YES"<<endl;
    else if(ans2>0)
    cout<<"YES"<<endl;
    else if(x>=n && ans<n)
    cout<<"MAYBE"<<endl;
    else if(x<n)
    cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    


    
 }
}
/*
if(a==n)
    cout<<"YES"<<endl;
    else if(ans>=n && x>=n)
    cout<<"YES"<<endl;
    else if(x>=n && ans<n)
    cout<<"MAYBE"<<endl;
    else if(x<=n)
    cout<<"NO"<<endl;
*/