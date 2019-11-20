
#include<bits/stdc++.h>
using namespace std;



int sc1()
{
    int x;
    scanf("%d",&x);
    return x;
}

long long sc2()
{
    long long x;
    scanf("%lld",&x);
    return x;
}

#define  gcd(a,b)         __gcd(a,b)
#define  lcm(a,b)         (a*b)/gcd(a,b)
#define  Int              sc1()
#define  LL               sc2()
#define  For(n)           for(int i=0;i<n;i++)
#define  Forj(n)          for(int j=0;j<n;j++)
#define  Fork(n)          for(int k=0;k<n;k++)
#define  For1(n)          for(int i=1;i<=n;i++)
#define  ll               long long
#define  vi               std::vector<int>
#define  vll              std::vector<ll>
#define  qui              qu
#define  pb               push_back
#define  mpsi             std::map<string, int>

int sz[1001];

void makeset(int par[],int n)
{
    for(int i=1; i<=n; i++)

    {
        sz[i]=1, par[i]=i;
    }
}

int root(int v)
{
    if(par[v] == v) return v;
    return par[v] = root(par[v]);
}

void union(int par[1007],int a, int b)
{
    a = root(a), b = root(b);
    if(a == b)  return;
    if(sz[a] < sz[b]) swap(a, b);
    par[b] = a;
    sz[a] += sz[b];
}

bool find(int A,int B)
{
    if( root(A)==root(B) )       //if A and B have same root,means they are connected.
        return true;
    else
        return false;
}




int main()
{
    int t=Int;
    for(int kk=1; kk<=t; kk++)
    {
        int n=Int,m=Int,q=Int;
        int arr[n];
        for(int i=1; i<=n; i++) makeset(arr,n);

        for(int i=1; i<=m; i++)
        {
            int u=Int,v=Int;
            union(arr,u,v);
        }
        cout<<"Case "<<kk<<":"<<endl;
        for(int i=1; i<=q; i++)
        {
            int u=Int,v=Int;
            bool x=find(u,v);
            if(x==1) printf("Chicken dinner coming soon!\n");
            else printf("Eat vegetables!\n");

        }

    }
    return 0;
}



