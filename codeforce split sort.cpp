#include<iostream>
#include<bits/stdc++.h>

using namespace std;
  
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]>b[j])
            swap(b[i],b[j]);
        }
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(b[i]==a[j])
            {
                swap(b[i],a[j]);
                ans++;
            }
        }
    }
    cout<<ans<<endl;
 }
}
