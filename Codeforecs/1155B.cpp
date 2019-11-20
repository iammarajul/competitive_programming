
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
    int n=Int;
    string s;
    cin>>s;
    int cnt=0,cnt2=0;
    for(int i=0;i<n;i++)
    {
    	if(s[i]=='8') cnt++;
    }
    int cc=n-1;
    for(int i=1;i<=10;i++)
    {
    	if(s[cc]=='8') cnt2++;
    	cc--;
    }

    int l=n-11;

    if(l/2>=cnt)
    {
    	cout<<"NO"<<endl;
    }
    else
    {
    	if(cnt-cnt2==0) cout<<"NO"<<endl;
    	else
    	{
    		int cnt3=cnt-cnt2;
    		if(l/2>=cnt3) cout<<"NO"<<endl;
    		else cout<<"YES"<<endl;
    	}
    }
    
    
    return 0;
}


