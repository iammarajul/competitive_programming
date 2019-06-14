#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,f;
    cin>>n>>l>>f;
    int sum=0;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        int x=a-sum;
        ans+=x/f;
        sum=a+b;
    }
    int x=l-sum;
    ans+=x/f;
    cout<<ans<<endl;

}
