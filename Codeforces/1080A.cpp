#include<bits/stdc++.h>
using namespace std;

int main()
{
 int n,k;
    cin>>n>>k;
    int p=(n*2)/k;
    if((n*2)%k!=0) p++;
    int q=(n*5)/k;
    if((n*5)%k!=0) q++;
    int r=(n*8)/k;
    if((n*8)%k!=0) r++;

    cout<<p+q+r<<endl;
}
