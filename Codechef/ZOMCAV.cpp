
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
    int t=Int;
    while(t--)
    {
    	int n=Int;
    	int a[n+1],b[n+1];
    	For1(n) a[i]=Int;
    	For1(n) b[i]=Int;

    	sort(b+1,b+n+1);
    	int final[n+3];
    	memset(final,0,sizeof(final));

    	for(int i=1;i<=n;i++)
    	{
    		int l=max(1,i-a[i]);
    		int r=min(n,i+a[i]);
    		final[l]++;
    		final[r+1]--;
    	}

    	for(int i=2;i<=n;i++) final[i]+=final[i-1];

    	sort(final+1,final+n+1);
    	int hh=1;
    	For1(n) {
    		//cout<<final[i]<<" ";
    		if(final[i]!=b[i]) {
    			hh=0;
    		}
    	}
    	if(hh) puts("YES");
    	else puts("NO");



    }
    
    return 0;
}


