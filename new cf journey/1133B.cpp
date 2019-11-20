
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
#define  MAX              100007;





int arr[102];

int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n=Int,k=Int;

    int arr[n+1];
    std::vector<int> v[k+1];

    for(int i=0;i<n;i++)
    {
    	arr[i]=Int;
    	int re=arr[i]%k;
    	v[re].pb(i);

    }
    int ans=0;
    for(int i=0;i<=(k)/2;i++)
    {
    	//cout<<v[i].size()<<" ";
    	int vv=(k-i)%k;
    	int x1=v[i].size();
    	int x2=v[vv].size();
    	if(i==vv) ans+=(x1/2)*2;
    	else
    	{
    		ans+=min(x1,x2)*2;
    	}

    }

    cout<<ans<<endl;
    
    return 0;
}


