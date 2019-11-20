
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







int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n=Int;

    int arr1[n+1];
    ll arr2[n+1];
    ll sum=0;
    for(int i=1;i<=n;i++)
    {
    	arr1[i]=Int;
    	arr2[i]=arr1[i];
    	sum+=arr1[i];
    }

    sort(arr2+1,arr2+n+1,greater<int>());
    sort(arr1+1,arr1+n+1,greater<int>());

    for(int i=2;i<=n;i++)
    {
    	arr2[i]+=arr2[i-1];
    }

    //for(int i=1;i<=n;i++) cout<<arr2[i]<<" ";
    //cout<<endl;

    int m=Int;

    while(m--)
    {
    	int x=Int;

    	ll k=(arr2[x]-arr1[x]);
    	ll ans=sum-(arr2[x]);
    	cout<<k+ans<<endl;
    }
    
    return 0;
}


