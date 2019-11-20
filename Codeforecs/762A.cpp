#include<bits/stdc++.h>
using namespace std;

#define ll long long
vector<int> ar;

bool cheak(ll p)
{
    int s=sqrt(p)
    if(s*s==p) return true;
    return false;
}
int main()
{
    ll a,b;
    cin>>a>>b;
    int s=sqrt(a);

    for(int i=1;i<=s;i++)
    {
        if(a%i==0)
            ar.push_back(i);
    }
    int nod;
    if(cheak(a)==false) nod=a.size()*2;
    else node=(a.size()*2)-1;

    if(b>node) cout<<-1<<endl;
    else if(b<=a.size()) cout<<ar[b-1];
    else if(b>a.size() && cheak(a)==false) {cout<<a/ar[b-a.size()-1]<<endl; }
    else (b>a.size() && cheak(a)==true) {cout<<a/ar[b-a.size()-1-1]<<endl;}

}
