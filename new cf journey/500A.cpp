
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
    int n=Int,t=Int;
    int arr[n+1];
    for(int i=1;i<n;i++) arr[i]=Int;
    int cr=1;
    int vis[n+1];
    for(int i=0;i<=n;i++) vis[i]=0;
    //vis[cr]=1;
    while(1)
    {
    	//cout<<cr<<endl;
    	if(cr==t) {
    		cout<<"YES"<<endl;
    		return 0;
    	}
    	if(vis[cr]==1 || cr==n) {
    		cout<<"NO"<<endl;
    		return 0;
    	}
    	else vis[cr]=1;
    	cr=cr+arr[cr];

    }

    return 0;
}


