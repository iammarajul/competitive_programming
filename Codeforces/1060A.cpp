#include<bits/stdc++.h>
using namespace std;
int arr[10];
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='8') cnt++;
    }
    int l=n/11;
    if(cnt>=l) cout<<l;
    else cout<<cnt<<endl;

}
