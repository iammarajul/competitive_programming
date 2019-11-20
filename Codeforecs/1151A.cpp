
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
    int ans=999999999;
    for(int i=0;i<=s.size()-4;i++)
    {
    	int p=i;
    	

    	int b1=min(abs('A'-s[i]),(26-abs('A'-s[i])));
    	int b2=min(abs('C'-s[i+1]),(26-abs('C'-s[i+1])));
    	int b3=min(abs('T'-s[i+2]),(26-abs('T'-s[i+2])));
    	int b4=min(abs('G'-s[i+3]),(26-abs('G'-s[i+3])));

    	int xx=b1+b2+b3+b4;
    	ans=min(ans,xx);

    }

    cout<<ans<<endl;


    
    return 0;
}


