
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








int main()
{	
	
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    //int arr2[]={10,20,30,30,30,40,50,60};

    //cout<<upper_bound(arr2,arr2+8, 0)- arr2<<endl;

    int n=Int;

    ll arr[n+1];

    for(int i=0;i<n;i++)
    {
    	arr[i]=LL;
    	if(arr[i]<0) arr[i]=-arr[i];
    	
    }

    sort(arr,arr+n);
    ll ans=0;

    //For(n) cout<<arr[i]<<" ";

    //cout<<endl;
    for(int i=0;i<n;i++)
    {
    	ll x=arr[i];
    	
    	int mx=upper_bound(arr,arr+n,(ll)x*(ll)2)- arr;
    	//cout<<mx<<endl

    	//cout<<mx-i-1<<endl;
    	int ff=(mx-(i+1));

	   	ans+=ff;

    }

    cout<<ans<<endl;
    
    
    
    return 0;
}

