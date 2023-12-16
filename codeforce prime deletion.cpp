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
    string x;
    cin>>x;
    int n=x.length();
    int a[n];
    int ans=0;
    int ans1=0;
    bool isPrime=true;
    for(int i=0;i<n;i++)
    a[i]=int(x[i])-48;
    
    //cout<<isPrime(9);
    for(long long int i=0;i<9;i++)
    {
        ans=a[i];
        for(long long int j=i+1;j<9;j++)
        {
            ans=ans*10+a[j];
            if(ans==0 || ans==1)
            {
                isPrime=false;

            }
            for(long long int k=2;k<ans;k++)
            {
                if(ans%k==0)
                {
                    isPrime=false;
                    
                }
            }
            if(isPrime)
            {
                ans1++;
                break;
            }
        }
        if(ans1==0)
        ans=0;
        else 
        {
            break;
        }
    }
      if(ans1>0)
      cout<<ans<<endl;
      else 
      cout<<"-1"<<endl;
}

}