
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
#define  MAX              100007;


map<string,int>mp;

string s[17600];
int  permug()
{
	int cnt=0;
	for(int i=(int)'a' ;i<=(int)'z';i++)
	{
		for(int j=(int) 'a';j<=(int) 'z' ;j++)
		{
			for(int k=(int)'a';k<=(int)'z';k++)
			{
				s[cnt].pb((char)i);
				s[cnt].pb((char)j);
				s[cnt].pb((char)k);
				mp[s[cnt]]=cnt;
				cnt++;
				
			}
		}
	}
	return cnt;
}

int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int len=permug();



    string a,b;
    cin>>a>>b;

    int n=Int;
   	string f1[n+1],f2[n+1],f3[n+1];
    for(int i=0;i<n;i++)
    {
    	cin>>f1[i]>>f2[i]>>f3[i];
    }
    std::vector<int> adj[len+1];
    for(int i=0;i<len;i++)
    {
    	int x=mp[s[i]];
    	
    	for(int j=0;j<3;j++)
    	{
    		string k=s[i];
    		if(k[j]=='a')
    		{
    			k[j]='b';
    			adj[mp[k]].pb()
    		}
    		else if(k[j]=='z')
    		{

    		}


    	}
    }




    
    return 0;
}


