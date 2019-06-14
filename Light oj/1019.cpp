
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







int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
	int t=Int;
	for(int tst=1;tst<=t;tst++){

	int n=Int,m=Int;
	
	std::vector<int> v[n+1];
	int arr[n+1][n+1];
	int dis[n+1];
	int vis[n+1];
	for(int i=0;i<=n;i++) dis[i]=10e8;
	for(int i=0;i<=n;i++) vis[i]=000000;
	for(int i=0;i<=n;i++){ 
		for(int j=0;j<=n;j++) {
		if(i==j) arr[i][j]=0;
		else arr[i][j]=10e8;
		}
	}
	//memset(dis,10000,sizeof(dis));
	//memset(vis,0,sizeof(vis));

	for(int i=1;i<=m;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		v[a].pb(b);
		v[b].pb(a);
		if(arr[a][b]>c){
			arr[a][b]=c;
			arr[b][a]=c;
		}

	}
	//for(int i=1;i<=n;i++)
	//cout<<dis[i]<<" ";

	int st=1;
	queue<int>qu;
	dis[st]=0;
	//vis[st]=1;
	qu.push(st);
	while(!qu.empty())
	{
		int tp=qu.front();
		qu.pop();
		vis[tp]=1;
		for(int i=0;i<v[tp].size();i++)
		{
			int aa=v[tp][i];
			
			//if(!vis[aa]){
				if(dis[aa]>dis[tp]+arr[aa][tp]){
				dis[aa]=dis[tp]+arr[aa][tp];
				//vis[aa]=1;
				qu.push(aa);
			}
			//}
			
		}
	}
	printf("Case %d: ",tst );
	if(dis[n]==10e8) cout<<"Impossible"<<endl;

	else cout<<dis[n]<<endl;

	}


    
    return 0;
}


