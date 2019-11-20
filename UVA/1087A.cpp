
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

	string s;
	cin>>s;
	int l=s.size();
	if(l==1) cout<<s<<endl;
	else{
	int p;
	if(l%2==0){
		p=l/2-1;
	}
	else{
		p=l/2;
	}
    int cnt=1;
    int lf=p+1;
    int r=p-1;
    cout<<s[p];
    for(int i=p;1;cnt++)
    {
    	if(cnt%2!=0) cout<<s[lf++];
    	else cout<<s[r--];
    	if(cnt==l-1) break;
    }
    cout<<endl;
    return 0;
}
}


