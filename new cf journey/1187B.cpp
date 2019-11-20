
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
#define  MAX              100007





vector<int >adj[30];


int main()
{	
	
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int len=Int;
    string s;
    cin>>s;
    for(int i=0;i<len;i++)
    {
    	adj[s[i]-'a'].pb(i+1);
    }

    int q=Int;

    while(q--)
    {
    	string x;
    	cin>>x;
    	int ans=0;
    	int arr[30];
    	memset(arr,0,sizeof(arr));

    	for(int i=0;i<x.size();i++)
    	{
    		arr[x[i]-'a']++;
    	}
    	
    	for(int i=0;i<=25;i++)
    	{
    		if(arr[i]) ans=max(ans,adj[i][arr[i]-1]);
    	}
    	cout<<ans<<endl;


    }
    
    
    return 0;
}


