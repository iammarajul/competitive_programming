#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1,a2,a3,b1,b2,b3;
    int n;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    int s1=a1+a2+a3;
    int s2=b1+b2+b3;
    int ans=ceil(s1/5.0)+ceil(s2/10.0);
    cout<<ans<<endl;
    if(ans<=n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
