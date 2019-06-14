#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;

        printf("Case %d: ",i);
        int x=(a+b)%2;
        int y=(c+d)%2;
        if(x!=y)
        {
            cout<<"impossible";
        }
        else
        {
            if(abs(a-c)==abs(b-d)) cout<<1;
            else cout<<2;
        }
        cout<<endl;
    }
}
