
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




int dp[1002][26];


int ff(char x)
{
	if(x=='A') return 0;
	if(x=='B') return 1;
	if(x=='C') return 2;
	if(x=='D') return 3;
	if(x=='E') return 4;
}
int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n=Int;
    int m=Int;
    string s[n+1];
    int arr[m+1];
    For(n) cin>>s[i];
    For(m) cin>>arr[i];

    for(int i=0;i<m;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		dp[i][ff(s[j][i])]++;
    	}
    }
    ll ans=0;
    for(int i=0;i<m;i++)
    {
    	ans+=arr[i] * (max({dp[i][0],dp[i][1],dp[i][2],dp[i][3],dp[i][4]}));
    }
    cout<<ans<<endl;

    
    return 0;
}


