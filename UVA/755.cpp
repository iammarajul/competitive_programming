
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



char trem(char a)
{
	if(a=='A' || a=='B' || a=='C') return '2';
	if(a=='D' || a=='E' || a=='F') return '3';
	if(a=='G' || a=='H' || a=='I') return '4';
	if(a=='J' || a=='K' || a=='L') return '5';
	if(a=='M' || a=='N' || a=='O') return '6';
	if(a=='P' || a=='R' || a=='S') return '7';
	if(a=='T' || a=='U' || a=='V') return '8';
	if(a=='W' || a=='X' || a=='Y') return '9';

	
}




int main()
{	
	
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    

    int tes=Int;

    for(int test=1;test<=tes;test++){
    

    int n=Int;
    std::map<string, int > mp;
    std::map<string, int > ::iterator it;
    for(int te=1;te<=n;te++)
    {
    	string s;
    	cin>>s;
    	string g;
    	for(int i=0;s[i];i++)
    	{
    		if(s[i]>='0' && s[i]<='9') g.pb(s[i]);
    		else if(s[i]>='A' && s[i]<='Z') 
    		{
    			char xx=trem(s[i]);
    			g.pb(xx);
    		}
    		if((int)g.size() == 3 ) g.pb('-');
    	}

    	mp[g]++;
    }
    int p=1;
    for(it=mp.begin();it!=mp.end();it++)
    {
    	if( it->second > 1) {cout<<it->first<<" "<< it->second <<endl;p=0;}
    }
    if(p)
    	printf("No duplicates.\n",);
    if(test!= tes) printf("\n");

}

    
    return 0;
}


