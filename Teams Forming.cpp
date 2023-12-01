#include<bits/stdc++.h>
using namespace std;
int Solution(int a[],int n)
{   
for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            swap(a[i],a[j]);
        }
    }
    int sum=0;
    for(int i=0;i<n;i+=2)
    {
        sum+=(a[i+1]-a[i]);
    }
    return sum;

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int sum=Solution(a,n);
    
    cout<<sum<<endl;
}
