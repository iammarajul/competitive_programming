
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



int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};



int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    

    int a=Int,b=Int;

    string s[a+1];

    For(a) cin>>s[i];

    for(int i=0;i<a;i++)
    {
    	for(int j=0;j<b;j++)
    	{
    		if(s[i][j]=='.')
    		{
    			int cnt =0;
    			for(int k=0;k<8;k++)
    			{
    				if((i+dx[k]>=0 && i+dx[k]<a) && (j+dy[k]>=0 && j+dy[k]<b))
    				{
    					if(s[i+dx[k]][j+dy[k]]=='*') cnt++;
    				}
    				
    			}
    			s[i][j]=cnt+'0';
    		}
    	}
    }

    for(int i=0;i<a;i++)
    {
    	for(int j=0;j<b;j++)
    	{
    		s[i][j]=='0'?cout<<".":cout<<s[i][j];
    	}
    	cout<<endl;
    }
    return 0;
}


