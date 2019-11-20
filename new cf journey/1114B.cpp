
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


bool cm1(const pair<int ,int >a, const pair<int ,int> b)
{
	if(a.first>b.first) return 1;
	if(a.first<b.first) return 0;
}

bool cm2(const pair<int ,int >a, const pair<int ,int> b)
{
	if(a.second<b.second) return 1;
	if(a.second>b.second) return 0;
}

std::map<int, int > mp;


int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n=Int,m=Int,k=Int;

    std::vector< pair<int,int> > v;
    For(n) 
    {
    	int x=Int;
    	v.pb(make_pair(x,i));
    }

    sort(v.begin(), v.end(),cm1);
    ll pk=0;
    for(int i=0;i<m*k;i++)
    {
    	int x=v[i].first;
    	//cout<<x<<" ";
    	pk+=x;
    	mp[x]++;
    }
   //cout<<endl;

    sort(v.begin(), v.end(),cm2);

    int cnt=0,cnt2=0;
    std::vector<int> ans;
    for(int i=0;i<n;i++)
    {
    	int x=v[i].first;
    	if(mp[x]!=0) {
    		cnt++;
    		mp[x]--;
    	}
    	if(cnt==m){
    		ans.pb(i+1);
    		cnt=0;
    		cnt2++;
    	}
    	if(cnt2==k-1) break;

    }

    cout<<pk<<endl;
    for(int i=0;i<ans.size();i++)
    {
    	cout<<ans[i]<<" ";
    }
    cout<<endl;

    
    return 0;
}


