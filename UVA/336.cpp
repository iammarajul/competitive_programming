#include<bits/stdc++.h>
using namespace std;



int sc1(){int x; scanf("%d",&x); return x;}

long long sc2(){long long x;scanf("%lld",&x);return x;}


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

int lab[10000];
int* bfs(int s,vector<int > adj[100],int n)
{
	int vis[10000];
	for(int i=0;i<=n;i++) vis[i]=0,lab[i]=10e8;
	vis[s]=1;
	lab[s]=0;
	queue<int>qu;
	qu.push(s);

	while(!qu.empty())
	{
		int x=qu.front();
		qu.pop();
		for(int i=0;i<adj[x].size();i++)
		{
			int y=adj[x][i];
			if(vis[y]==0){
			qu.push(y);
			lab[y]=lab[x]+1;
			vis[y]=1;
		}
		}
	}



	return lab;

}


int main()
{
	int tc=0;
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
	while(1){


	int n=Int;
	if(n==0) return 0;
	map<int ,int >mp;
	//std::map<int, int >::iterator it;
	int cnt=1;
	vector<int> adj[100];
	for(int i=0;i<n;i++)
	{
		int a=Int,b=Int;
		if(mp[a]==0){
			mp[a]=cnt;
			cnt++;
		}
		if(mp[b]==0) {
			mp[b]=cnt;
			cnt++;
		}
		int l=mp[a],r=mp[b];
		adj[l].pb(r);
		adj[r].pb(l);
	}

	/*for(it=mp.begin();it!=mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
	cout<<"Success"<<endl;
	for(int i=0;i<cnt;i++)
    {
        cout<<i<<"->";
        for(int j=0;j<adj[i].size();j++)
        {
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }*/

	while(1)
	{
		int s=Int,d=Int;
		if(s==0 && d==0) break;
		int start=mp[s];
		int cnt2=0;
		int *l = bfs(start,adj,cnt);
		for(int i=1;i<=cnt;i++){
            //cout<<i<<" "<<l[i]<<endl;
			if(l[i]>=d+1 || l[i]==10e8) cnt2++;
		}
		printf("Case %d: ",++tc);
		printf("%d nodes not reachable from node %d with TTL = %d.\n",--cnt2,s,d);
	}
	mp.erase(mp.begin(),mp.end());
	for(int i=0;i<=cnt;i++) adj[i].erase(adj[i].begin(),adj[i].end());

}


    return 0;
}



