
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

    int n=Int,k=Int;

    int arr[n+1];
    For1(n) arr[i]=Int;

    if(k>n) cout<<"You fool! I don't have that one"<<endl;

    else {
    	std::vector<int> v;

    	for(int i=1;i<=n;i++)
    	{
    		if(i!=k) v.pb(arr[i]);
    	}

    	sort(v.begin(), v.end());

    	for(int i=0;i<v.size();i++)
    	{
    		cout<<v[i];
    		if(i!=v.size()-1) cout<<" ";
    	}
    	cout<<endl;
    }


    
    
    return 0;
}


