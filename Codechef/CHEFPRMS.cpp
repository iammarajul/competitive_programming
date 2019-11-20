#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
void prim()
{
    prime.push_back(2);
    for(int i=3;i<=200;i+=2)
    {
        int sq=sqrt(i);
        int p=0;
        for(int j=2;j<=sq;j++)
        {
            if(i%j==0)
            {
                p=1;
                break;
            }
        }
        if(p==0) prime.push_back(i);
    }
}
vector<int >sp;
void semiprim()
{
    for(int i=0;i<prime.size();i++)
    {
        for(int j=0;j<prime.size();j++)
        {
            if(i!=j)
            {
                if(prime[i]*prime[j]<=200) sp.push_back(prime[i]*prime[j]);
            }
        }
    }
}
bool cheak(int n)
{
    for(int i=0;i<sp.size();i++)
    {
        for(int j=0;j<sp.size();j++)
        {
            if(sp[i]+sp[j]==n) return true;
        }
    }
    return false;
}
int main()
{
    prim();
    semiprim();
    int n;
    cin>>n;
    while(n--)
    {
        int x;
        cin>>x;
        if(cheak(x)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }


}
