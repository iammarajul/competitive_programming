#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long a,b;
        cin>>a>>b;
        long long ans=(2*(a*(a-b)))-((a-b)*(a-b));
        cout<<ans<<endl;
    }
}
