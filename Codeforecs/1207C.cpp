
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

    int tes=Int;

   while(tes--)
    {
    	ll n,a,b;
    	cin>>n>>a>>b;
    	string s;
    	cin>>s;
    	std::vector<int> v(n+2,0);
    	for(int i=0;i<n;i++) if(s[i]=='1') {v[i]=2;v[i+1]=2;}
    	std::vector<pair<int,int>> vc;
    	for(int i=0;i<=n;)
    	{
    		int x=v[i];
    		int cnt = 0;
    		while(v[i]==x) 
    		{
    			i++;
    			cnt++;
    			if(i>n) break;
    		}

    		vc.pb({x,cnt});


    	}
    	ll ans=0;
    	if(vc.size()==1) 
    	{	
    		int cc=vc[0].first;
    		if(!cc) cc++;
    		ans+=vc[0].second*(cc)*b + (vc[0].second-1)*(cc)*a;
    	}
    	else{
    	for(int i=0;i<vc.size();i++)
    	{
    		//cout<<vc[i].second<<" ";
    		if(vc[i].first==2) 
    		{
    			ans+=(vc[i].second*b*2);
    			ans+=(vc[i].second-1)*a;
    		}
    		else
    		{
    			if(i==0 || i==((int)vc.size())-1)
    			{
    				ans+=min((vc[i].second*b)+((vc[i].second+1)*a) , (vc[i].second*2*b) + ((vc[i].second))*a );
    			}
    			else
    			{
    				ans+=min((vc[i].second*b)+(((vc[i].second+1)+2)*a) , (vc[i].second*2*b) + ((vc[i].second+1))*a );
    			}
    		}
    	}}

    	cout<<ans<<endl;
   }
    
    return 0;
}


