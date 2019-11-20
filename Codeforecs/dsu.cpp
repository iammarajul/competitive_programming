#include<bits/stdc++.h>
using namespace std;

int rnk[100000];
int par[100000];

void makeSet(int n){
    for(int i=1;i<=n;i++)
    rnk[i]=1, par[i]=i;
}

int Find(int n){
    if(par[n] == n) return n;
    return par[n] = Find(par[n]);
}

void Union(int u, int v){
    int x = Find(u);
    int y = Find(v);
    if(x == y) return;
    if(rnk[y] > rnk[x]){
        par[x] = y;
        rnk[y] += rnk[x];
    }
    else{
        par[y] = x;
        rnk[x] += rnk[y];
    }
}

int main(){
    int t;cin>>t;
    for(int test=1;test<=t;test++)
    {
        int n,m,q;
        cin>>n>>m>>q;
        makeSet(n);
        for(int i=1;i<=m;i++)
        {
            int u,v;
            cin>>u>>v;
            Union(u,v);
        }
        cout<<"Case "<<test<<":"<<endl;
        for(int i=1;i<=q;i++)
        {
            int u,v;
            cin>>u>>v;
            int q=Find(u);
            int r=Find(v);
            if(q==r)
                cout<<"Chicken dinner coming soon!"<<endl;
            else
                cout<<"Eat vegetables!"<<endl;
        }
    }

}
