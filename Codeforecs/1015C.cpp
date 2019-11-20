#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n+1];
    long long sum1=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        sum1+=a;
        sum2+=b;
        arr[i]=a-b;
    }
    sort(arr,arr+n,greater<int>());
    if(sum2>m) cout<<-1<<endl;
    else if(sum2==m) cout<<n<<endl;
    else{
            int cnt=0;
        while(sum1>m)
        {
            sum1-=arr[cnt];
            cnt++;
        }
        cout<<cnt<<endl;
    }
}
