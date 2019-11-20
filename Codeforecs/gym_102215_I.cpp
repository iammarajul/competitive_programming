
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






int ans[200006];

int main()
{	
	
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n=Int;
    string s;
    cin>>s;
    if(n==1) {cout<<0<<endl;return 0;}
    int value=0,cnt=0;
    std::vector<int> v;
    for(int i=0;i<s.size();i++)
    {
    	if(s[i]>='0' && s[i]<='9') {value=value*10+(s[i]-'0');cnt++;}
    	else 
    	{
    		if(cnt) v.pb(value);
    		if(s[i]=='(') v.pb(-1);
    		else if(s[i]==')') v.pb(-2);

    		value =0,cnt=0;
    	}
    }

    //for(int i=0;i<v.size();i++) cout<<v[i]<<" ";
    	//cout<<endl;
    int bos=v[0];
    ans[bos]=0;
    stack<int>st;
    stack<int>bo;
    bo.push(bos);
    for(int i=1;i<v.size();i++)
    {
    	if(v[i]!=-1 && v[i]!=-2)
    	{
    		ans[v[i]]=bo.top();
    		bo.push(v[i]);
    		st.push(v[i]);
    	}
    	if(v[i]==-1)
    	{
    		st.push(v[i]);
    	}
    	else if(v[i]==-2)
    	{
    		st.pop();
    		st.pop();
    		bo.pop();
    	}
    	//cout<<i<<endl;

    }

    for(int i=1;i<=n;i++) {cout<<ans[i];
    	if(i!=n) cout<<" ";}

    	cout<<endl;
    
    
    return 0;
}


