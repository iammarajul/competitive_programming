#include<bits/stdc++.h>
using namespace std;
long long n,arr[100005]={0},ar2[100005]={0},ar3[100005]={0};
int main()
{

    int k;
    cin>>n>>k;
    for(int i=0;i<k;i++) cin>>arr[i];

    for(int i=0;i<k;i++) {
        long long a;
        if(n>=arr[i])
        {
            a=n%arr[i];
            ar2[i]=a;
            ar3[i]=a;
        }
        else
        {
            ar2[i]=999999999999999999;
            ar3[i]=999999999999999999;
        }
    }
    sort(ar3,ar3+k);
    long long x=ar3[0];
    //cout<<x<<endl;
    for(int i=0;i<k;i++) {
        if(ar2[i]==x) {
            cout<<i+1<<" "<<n/arr[i]<<endl;
            break;
        }
    }

}
