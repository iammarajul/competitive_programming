#include<bits/stdc++.h>
using namespace std;
int mark[10006];
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n; i++) cin>>arr[i];
    int cnt1=0,cnt2=0;
    int sum1=0,sum2=0;
    int i=0,j=n-1;
    for(;1;)
    {
        if(sum2>=sum1)
        {
            sum1=sum1+arr[i];
            i++;
            cnt1++;
        }
        else
        {
            sum2=sum2+arr[j];
            cnt2++;
            j--;
        }
        if((cnt1+cnt2)==n) break;

    }
    cout<<cnt1<<" "<<cnt2<<endl;

}
