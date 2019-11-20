
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




map<int,int>mp;


int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n=Int,m=Int,k=Int;
    int arr[n+1];

    For(n) arr[i]=Int;
    if(k==1) cout<<arr[n-1]-arr[0]+1<<endl;
    else{
    int cnt=0;
    std::vector<int> v;
    for(int i=0;i<n-1;i++)
    {
    	int x=arr[i+1]-arr[i];
    	v.pb(x);

    }

    sort(v.begin(), v.end(),greater<int>());

    //for(int i=0;i<k-1;i++) cout<<v[i]<<" ";

    for(int i=0;i<k-1;i++)
    {
    	mp[v[i]]++;
    }
	std::vector<int> v2;
    for(int i=0;i<n-1;i++)
    {
    	int dis=arr[i+1]-arr[i];
    	if(mp[dis]>0) {
    		v2.pb(i);
    		mp[dis]--;
    	}

    }

    int lll=v2.size();
    //for(int i=0;i<lll;i++ ) cout<<v2[i]<<" ";

    int ans=arr[v2[0]]-arr[0]+1;
    for(int i=0;i<lll-1;i++)
    {
    	if(v2[i+1]-v2[i]<=1) ans++;
    	else 
    	{
    		ans+=(arr[v2[i+1]]-arr[v2[i]+1])+1;
    	}
    }
    ans+=arr[n-1]-arr[v2[lll-1]+1]+1;

    cout<<ans<<endl;
}

    
    return 0;
}


