#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,k;
    cin>>n>>k;
    long long x=k/n;
    if(k%n!=0) x++;
    if(k>n) cout<<x<<endl;
    else cout<<1<<endl;
}
