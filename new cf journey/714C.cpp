
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
    int q=Int;
    map<string, int>mp;

    while(q--)
    {
    	char x;
    	cin>>x;
    	if(x=='+' || x== '-') 
    	{
    		string xp;
    		cin>>xp;

    		int lx= xp.size();
    		For(lx) xp[i]=((xp[i]-'0')%2+'0');
    		string p="";
    		for(int i=0;i<19-lx;i++) p.pb('0');
    		for(int i=0;xp[i];i++) p.pb(xp[i]);
    		//cout<<"         "<<p<<endl;
    		if(x=='+') mp[p]++;
    		else mp[p]--;

    	}
    	else 
    	{
    		string s;
    		cin>>s;
    		string p;
    		for(int i=0;i<19-(int)s.size();i++) p.pb('0');
    			for(int i=0;s[i];i++) p.pb(s[i]);
    				//cout<<"         "<<p<<endl;
    		cout<<mp[p]<<endl;
    	}
    }

    
    
    return 0;
}


