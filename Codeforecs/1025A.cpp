#include<bits/stdc++.h>
using namespace std;
int arr[130];
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++)
    {
        arr[(int)s[i]]++;
    }
    int cnt=0;

    for(int i=97;i<=122;i++)
    {
        if(arr[i]>1)
            cnt++;
    }
    if(cnt || n==1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
