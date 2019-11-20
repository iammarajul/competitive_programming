
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

    //int arr[]= {10, 20 , 30 , 30 ,30  , 40, 50 ,60};

   // cout<<upper_bound(arr,arr+8,61)-arr<<endl;

    int n=Int,  m =Int;;

    int arr[n+1],arr2[m+1];

    For(n) arr[i] = Int;
    For(m) arr2[i] = Int;

    sort(arr, arr+n);
    std::vector<int> ans;
    For(m)
    {
    	int x=arr2[i];
    	int vv = upper_bound(arr,arr+n,x) - arr;
    	if(vv == n-1)
    	{
    		if(x>=arr[n-1]) vv++;
    	}
    	ans.pb(vv);
    }

    for(int i=0;i<ans.size();i++)
    {
    	cout<<ans[i];
    	if(i!=ans.size()-1) cout<<" ";
    }

    
    
    return 0;
}


