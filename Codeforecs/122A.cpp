#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=n;
    int sum=0;
    while(x>0)
    {
        int p=x%10;
        sum=sum+p;
        x=x/10;
    }
    if(sum%7==4 || sum%7==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


}
