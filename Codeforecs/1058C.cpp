#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arr[100];
    arr[0]=s[0]-'0';
    for(int i=1;i<s.size();i++)
    {
        arr[i]=arr[i-1]+(s[i]-'0');
    }

    //for(int i=0;i<n;i++) cout<<arr[i]<<" ";

    for(int i=0;i<n;i++)
    {
        if(arr[n-1]%arr[i]==0) {cout<<"YES"<<endl;return 0;}
    }
    cout<<"NO"<<endl;

}
