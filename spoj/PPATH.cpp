
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
#define  MAX              100007;



bool prm[10007] ;
vector<int> pp;
std::vector<int> adj[10000];
void sieve(int N) {
	prm[0] = prm[1] = 1 ;
	for (int i = 4 ; i <= N ; i += 2) prm[i] = 1 ;
	for (int i = 3 ; i * i <= N ; i += 2) {
		if (!prm[i]) {
			for (int j = i * i ; j <= N ; j += i + i)prm[j] = 1 ;
		}
	}

	for (int i = 1000; i <= 9999; i++) if (prm[i] == 0) pp.pb(i);
}

int change(int n, int pos, int l)
{
	int arr[4];
	arr[0] = n % 10;
	n = n / 10;
	arr[1] = n % 10;
	n = n / 10;
	arr[2] = n % 10;
	n = n / 10;
	arr[3] = n % 10;
	n = n / 10;

	arr[pos] = l;

	int ans = arr[0] + arr[1] * 10 + arr[2] * 100 + arr[3] * 1000;
	return ans;


}


int bfs(int s,int e)
{
	int vis[10000];
	int leb[10000];
	memset(vis,0,sizeof(vis));
	memset(leb,0,sizeof(leb));
	//cout<<adj[s].size()<<endl;
	queue<int>qu;
	qu.push(s);
	vis[s]=1;
	leb[s]=0;
	while(!qu.empty())
	{
		int top=qu.front();
		//cout<<top;
		//cout<<adj[top].size()<<endl;
		qu.pop();

		for(int i=0;i<adj[top].size();i++)
		{

			if(vis[adj[top][i]]==0)
			{

				leb[adj[top][i]]=leb[top]+1;
				vis[adj[top][i]]=1;
				qu.push(adj[top][i]);
			}
		}
	}
	//for(int i=0;i<pp.size();i++) cout<<vis[pp[i]]<<" ";
	return leb[e];
}



int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//cout << change(1233, 3, 1) << endl;
	
	sieve(10000);
	
	//cout<<pp.size()<<endl;
	for (int i = 0; i < pp.size(); i++)
	{
		int x = pp[i];
		//cout<<" "<<x<<endl;
		for(int j=0;j<=3;j++)
		{
			int k=0;
			if(j==3) k=1;
			for(;k<=9;k++)
			{
				int kk=change(x,j,k);
				//cout<<kk<<endl;
				if(prm[kk]==0 && kk!=x) {adj[x].pb(kk);}
			}
		}

	}
	//for(int i=0;i<adj[1033].size();i++) cout<<adj[1033][i]<<" ";
	//	cout<<endl;

	//for(int i=0;i<adj[1733].size();i++) cout<<adj[1733][i]<<" ";
		//cout<<endl;
	
	int n=Int;

	while(n--)
	{
		int x=Int,y=Int;
		int c=bfs(x,y);
		if(x==y) cout<<0<<endl;
		else if(c==0) cout<<"Impossible"<<endl;
		else cout<<c<<endl;
	}
	


	return 0;
}


