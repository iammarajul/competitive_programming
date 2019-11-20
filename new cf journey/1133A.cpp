
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







int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    string a,b;
    cin>>a>>b;

    int h1=(a[0]-'0')*10+a[1]-'0';
    int h2=(b[0]-'0')*10+b[1]-'0';
    int m1=(a[3]-'0')*10+a[4]-'0';
    int m2=(b[3]-'0')*10+b[4]-'0';

    int x=h1*60+m1;
    int x2=h2*60+m2;
    int k=(x+x2)/2;
	int ans1=k/60;int ans2=k%60;
	if(ans1<=9 || ans2<=9)
	{
		if(ans1<=9 && ans2<=9)
		{
			cout<<"0"<<ans1<<":0"<<ans2<<endl;
		}
		else if(ans1<=9)
		{
			cout<<"0"<<ans1<<":"<<ans2<<endl;
		}
		else
		{
			cout<<ans1<<":0"<<ans2<<endl;
		}
	} 
	else{
    cout<<ans1<<":"<<ans2<<endl;
}
    
    return 0;
}


