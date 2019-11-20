
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
#define  PI				  acos(-1.0)	






int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int ts=Int;
    for(int uu=1;uu<=ts;uu++)
    {
    double x;
    cin>>x;

    double y=sqrt(x*x+x*x);
    y=y/2.;
    double area=(PI*y*y);
    area=area/4.;
    double tri=.5*y*y;
    double zz=area-tri;

    int z=sqrt(y*y+y*y);
    z=z/2.;
    double area4=PI*z*z;
    area4=area4/2.;
    cout<<"Case "<<uu<<": ";
    cout<<fixed;
    cout<<setprecision(4);
    cout<<abs(area4-zz)<<endl;
}

    
    return 0;
}


