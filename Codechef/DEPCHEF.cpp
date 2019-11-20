
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
    int te=Int;
    while(te--){
    int n=Int;
    int a[n+1],d[n+1];
    For(n) a[i]=Int;
    For(n) d[i]=Int;
    std::vector<int> v;

    for(int i=0;i<n;i++)
    {
    	int l,r;

    	if(i==0) l=a[n-1],r=a[i+1];
    	else if(i==n-1) r=a[0],l=a[i-1];
    	else l=a[i-1],r=a[i+1];
    	int x=l+r;
    	if(d[i]>x) v.pb(d[i]);
    }

    sort(v.begin(), v.end());
    if(v.size()==0) cout<<-1<<endl;
    else

    cout<<v[v.size()-1]<<endl;
}

    
    return 0;
}


