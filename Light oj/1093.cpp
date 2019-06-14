
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
    for(int tes=1;tes<=te;tes++){

    int n=Int,k=Int;

    int arr[n+1];

    For1(n) arr[i]=Int;

    deque< pair<int,int> >dq;
    std::vector<int> min,mx;

    for(int i=1;i<=n;i++)
    {
    	int x=arr[i];
    	while(!dq.empty() && dq.back().first>=x) dq.pop_back();
    	dq.pb({x,i});
    	while(!dq.empty() && dq.front().second<=i-k ) dq.pop_front();
    	if(i>=k) min.pb(dq.front().first);

    }
    dq.erase(dq.begin(), dq.end());
    for(int i=1;i<=n;i++)
    {
    	int x=arr[i];
    	while(!dq.empty() && dq.back().first<=x) dq.pop_back();
    	dq.pb({x,i});
    	while(!dq.empty() && dq.front().second<=i-k ) dq.pop_front();
    	if(i>=k) mx.pb(dq.front().first);

    }
    int ans=0;
    for(int i=0;i<min.size();i++)
    {
    	int cc=mx[i]-min[i];
    	ans=max(cc,ans);
    }

    printf("Case %d: %d\n",tes,ans);

}

    return 0;
}











