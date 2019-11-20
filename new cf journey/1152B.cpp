
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



int f1(int x)
{
	int index=50;
	int cnt=1;
	while(x>0)
	{
		int p=x%2;
		if(p==0) index=cnt;
		x/=2;
		cnt++;
	}

	return index;
}




int main()
{	
	
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n=Int;
    std::vector<int> v;
    int ans=0;
    for(int bb=1;bb<=40;bb++)
    {
    	if(ceil(log2(n+1))==floor(log2(n+1))) break;
    	else if(bb%2==1)
    	{
    		int c=f1(n);
    		v.pb(c);
    		n=n^(int)(powl(2,c)-1);
    		ans++;

    	}
    	else
    	{
    		n=n+1;
    		ans++;
    	}
    }
    cout<<ans<<endl;

    for(int i=0;i<v.size();i++)
    {
    	cout<<v[i];
    	if(i!=v.size()-1) cout<<" ";
    }

    
    
    return 0;
}


