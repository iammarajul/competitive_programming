#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++) cin>>arr[i];


    sort(arr,arr+n,greater<int>());
    int x=arr[0];
    int ans;
    bool p=false;
    for(int i=0;i<n-2;i++)
    {
        x=__gcd(x,arr[i+1]);
        if(x>arr[i+2]) {ans=n-1-i;
            p=true;
        }
    }

    if(p==true) cout<<--ans<<endl;
    else cout<<-1<<endl;
}
