
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

    string a;
    cin>>a;
    string s[5];
    for(int i=0;i<5;i++) cin>>s[i];
    
    char ts1=a[0];
    char ts2=a[1];
    
    int p=0;
    for(int i=0;i<5;i++)
    {
		char x=s[i][0];
		int y=s[i][1];
		if(ts1==x || ts2==y){
		
		 p=1;break;}

    }
    if(p==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
    return 0;
}


