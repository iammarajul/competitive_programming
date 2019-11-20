#include<bits/stdc++.h>
using namespace std;
int arr[1005];
void makeset(int a)
{
    for(int i=1;i<=a;i++) arr[i]=i;
}
void fn(int x)
{
    if(x==1) return;
    else
    {
        fn(x-1);
        swap(arr[x],arr[x-1]);
    }
}
int main()
{
    int n;
    cin>>n;
    makeset(n);
    fn(n);

    for(int i=1;i<=n;i++)
        cout<<arr[i]<<" ";

}
