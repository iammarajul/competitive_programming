
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
    
    int n=Int,m=Int,p=Int;
    set<int>st;
    set<int>::iterator it;
    map<int,int>mp;
    map<int,int>::iterator it1;
    for(int i=0;i<n;i++)
    {
    	int x=Int;
    	st.insert(x);
    }
    for(int i=0;i<m;i++)
    {
    	int x=Int;
    	st.insert(x);
    }

    for(int i=0;i<p;i++)
    {
    	int x=Int;
    	mp[x]++;
    }
    for(it=st.begin();it!=st.end();it++)
    {
    	mp[*it]++;
    }
    std::vector<int> ans;

    for(it1=mp.begin();it1!=mp.end();it1++)
    {
    	if(it1->second == 2) ans.pb(it1->first);
    }

    if(ans.size()==0) {cout<<"Null Set"<<endl;return 0;}
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++)
    {
    	cout<<ans[i];
    	if(i!=ans.size()-1) cout<<" ";
    }

    cout<<endl;





    

    return 0;
}


