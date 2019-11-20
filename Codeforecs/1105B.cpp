
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

    int n=Int,k=Int;
    string s;
    cin>>s;
    int mx=0;
    for(int i=97;i<=122;i++)
    {
    	char ch=(char) i;
    	int ans=0;

    	for(int j=0;j<s.size();j++)
    	{
    		if(s[j]==ch)
    		{
    			int kk;int cnt=0;
    			for(kk=j;kk<s.size();kk++)
    			{
    				if(s[kk]!=ch) break;
    				else cnt++;
    			}
    			ans+=cnt/k;
    			j=kk-1;
    		}
    	}
    	mx=max(mx,ans);
    }

    cout<<mx<<endl;
    
    return 0;
}


