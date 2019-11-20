#include<bits/stdc++.h>
using namespace std;

int rnk[100000];
int par[100000];

void makeSet(int n)
{
    par[n] = n;
}

int Find(int n)
{
    if(par[n] == n) return n;
    return par[n] = Find(par[n]);
}

void Union(int u, int v)
{
    int x = Find(u);
    int y = Find(v);
    if(x == y) return;
    if(rnk[y] > rnk[x])
    {
        par[x] = y;
        rnk[y] += rnk[x];
    }
    else
    {
        par[y] = x;
        rnk[x] += rnk[y];
    }
}

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
        int type;
        cin >> type;
        if(type == 1)
        {
            int u;
            cin >> u;
            if(par[u] != 0)cout << "Error" << endl;
            else makeSet(u);
        }
        if(type == 2)
        {
            int u, v;
            cin >> u >> v;
            if(Find(u) != u || Find(v) != 0)cout << "Error" << endl;
            else
            {
                makeSet(v);
                par[u] = v;
            }
        }
        if(type == 3)
        {
            int u;
            cin >> u;
            cout << Find(u) << endl;
        }
    }

}
