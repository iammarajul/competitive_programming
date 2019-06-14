#include<bits/stdc++.h>
using namespace std;
struct ab
{
    int a,b;
}arr[1001];
bool cmp(ab A,ab B)
{
    if(A.b<B.b) return 1;
    if(A.b>B.b) return 0;
    if(A.a>B.a) return 1;
    if(A.a<B.a) return 0;
}
int pk[1001];
int main()
{

    for(int i=1;i<=1000;i++)
    {
        int cnt=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0) cnt++;
        }
        arr[i].a=i;
        arr[i].b=cnt;
        pk[i]=cnt;
    }
    sort(arr+1,arr+1001,cmp);

    //for(int i=1;i<=1000;i++) cout<<arr[i].a<<endl;

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;
        cout<<"Case "<<i<<": "<<arr[x].a<<endl;
    }

}
