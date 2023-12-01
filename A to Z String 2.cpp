#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    //cout<<'s'+1;
    vector<char> s;
    
    int n,x;
    char asc=65;
    
    
    cin>>n>>x;
    for(int i=0;i<26;i++)
    {
        for(int j=0;j<n;j++)
        {
            s.push_back(asc);
        }
        asc++;

    }
    
    cout<<s[x-1];

    
}