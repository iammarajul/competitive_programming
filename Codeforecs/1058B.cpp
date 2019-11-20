#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin>>n>>d;



    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int an1=a-b+d;
        int an2=a-b-d;
        int an3=a+b-d;
        int an4=a+b-2*n+d;

        if((an1>=0 && an2<=0) && (an3>=0 && an4<=0)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

}
