
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
    //cout<<lower_bound(arr,arr+9,61)-arr;
    
    int la,lb,lc;
    cin>>la>>lb>>lc;

    std::vector<int> a(la),b(lb),c(lc);

    For(la)  a[i]=Int;
    For(lb)  b[i]=Int;
    For(lc)  c[i]=Int;


    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
	int ans=0;
    for(int i=0;i<la;i++)
    {
    	ll xx=a[i];
    	int x= upper_bound(b.begin(),b.end(),xx-1)-b.begin();
    	int y= lower_bound(c.begin(),c.end(),xx+1)-c.begin();
    	int ss=x+(lc-y)+1;
		ans=max(ans,ss);
    }

    cout<<ans<<endl;
    
    //return 0;
}


