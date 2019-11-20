#include<bits/stdc++.h>
using namespace std;



int sc1() {int x; scanf("%d", &x); return x;}

long long sc2() {long long x; scanf("%lld", &x); return x;}

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







int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int tes = Int;

    while (tes--)
    {
        int n = Int;
        int m = Int;
        std::vector < int > adj[n + 1];

        for (int i = 0; i < m; i++)
        {
            int u = Int;
            int v = Int;
            adj[u].pb(v);
            adj[v].pb(u);
        }
        if (m % 2 == 0)
        {
            cout << 1 << endl;
            for (int i = 0; i < n; i++)
            {
                cout << 1;
                if (i != n - 1) cout << " ";
                else cout << endl;
            }
        }
        else
        {
            int zz;
            std::vector<int> sa;
            int p=0;
            cout<<2<<endl;
            for (int i = 1; i <= n; i++)
            {
                if(adj[i].size()==0)
                {
                    cout<<2;
                } 
                else if (adj[i].size() % 2 == 1 && p==0)
                {
                    cout<<2;
                    p=1;   
                }
                else{
                    cout<<1;
                } 
                if(i!=n) cout<<" ";
            }

            cout<<endl;
            
        }
    }

    return 0;
}