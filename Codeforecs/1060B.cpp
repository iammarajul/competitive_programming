#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,cnt=0,pk;
    cin>>n;
    long long k=n;
    while(k>9)
    {
        k=k/10;
        cnt++;
    }
    //cout<<cnt<<" "<<k<<endl;
    k--;

    pk=k*pow(10,cnt);
    string s;
    for(int i=1;i<=cnt;i++) s.push_back('9');
    stringstream geek(s);
    long long x=0;
    geek >> x;
    long long ans1=pk+x;
    long long ans2=n-ans1;

    long long ans3=0;
    //cout<<ans1<<" "<<ans2<<endl;

    while(ans1!=0){
        int t=ans1%10;
        ans3+=t;
        ans1=ans1/10;
    }

    while(ans2!=0){
        int t=ans2%10;
        ans3+=t;
        ans2=ans2/10;
    }

    cout<<ans3<<endl;



}
