
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






map<int,int,greater<int>>b;
map<int,int,greater<int>>::iterator it1;
map<int,int>s;
map<int,int>::iterator it2;

int main()
{	
	
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n=Int,k=Int;

    for(int i=0;i<n;i++)
    {
    	char x;
    	cin>>x;
    	int p,q;
    	cin>>p>>q;
    	if(x=='B') b[p]+=q;
    	else s[p]+=q;

    }
    std::vector<pair<int,int>> vv;
    int cnt2=0;
    for(it2=s.begin();it2!=s.end();it2++)
    {
    	vv.pb({it2->first,it2->second});
    	cnt2++;
    	if(cnt2==k) break;
    }
    sort(vv.begin(), vv.end());

    for(int i=(int)vv.size()-1;i>=0;i--) cout<<"S "<<vv[i].first<<" "<<vv[i].second<<endl;

    
    int cnt=0;
    for(it1=b.begin();it1!=b.end();it1++)
    {
    	cout<<"B "<<it1->first<<" "<<it1->second<<endl;
    	cnt++;
    	if(cnt==k) break;
    }
    
    
    return 0;
}


