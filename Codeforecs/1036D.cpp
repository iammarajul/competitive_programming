#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n1,n2;long long sum1=0,sum2=0;
    scanf("%lld",&n1);
    long long arr[n1];
    for(int i=0; i<n1; i++) scanf("%lld",&arr[i]),sum1+=arr[i];
    scanf("%lld",&n2);long long arr2[n2];
    for(int i=0; i<n2; i++) scanf("%lld",&arr2[i]),sum2+=arr2[i];
    if(sum1!=sum2) printf("-1\n");
    else
    {

        int ans=0;
        for(int i=0,j=0,cnt1=0,cnt2=0;; )
        {
            if(i==n1 || j==n2) break;
            if(arr[i]==arr2[j])
            {
                ans++;
                //cout<<arr[i]<<endl;
                if(i==cnt1) i++,cnt1++;
                else if(cnt1>i) i=++cnt1;
                if(j==cnt2) j++,cnt2++;
                else if(cnt2>j) j=++cnt2;

            }
            else
            {
                if(arr[i]<arr2[j]) arr[i]+=arr[++cnt1];
                else arr2[j]+=arr2[++cnt2];
            }
        }

        printf("%d\n",ans);
    }


}
