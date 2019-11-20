
#include<bits/stdc++.h>
using namespace std;



int sc1(){int x; scanf("%d",&x); return x;}

long long sc2(){long long x;scanf("%lld",&x);return x;}


#define  fast;			 ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
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
#define  MAX              100007


int vis[101];
std::vector<int> adj[101];

void dfs(int n)
{
	vis[n]=1;
	for(int i=0;i<adj[n].size();i++)
	{
		if(!vis[adj[n][i]]) dfs(adj[n][i]);
	}
}




int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    //fast;

    int n=Int;
    int a[n+1],b[n+1];
    
    for(int i=0;i<n;i++)
    {
    	cin>>a[i]>>b[i];
    }

    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		if(j==i) continue;
    		if((a[i]==a[j]) || (b[i]==b[j]) )
    		{
    			adj[i].pb(j);
    			adj[j].pb(i);
    		} 
    	}
    }
    int cnt=0;
    
   for(int i=0;i<n;i++)
    {
    	if(!vis[i])
    	{
    		dfs(i);
    		cnt++;
    	}
    }

    cout<<cnt-1<<endl;
    return 0;
}


