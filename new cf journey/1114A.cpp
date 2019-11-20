
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

    int a,d,c;
    int g,p,b;
    cin>>a>>d>>c>>g>>p>>b;
   
    if(g>=a){
    	int rem=g-a;
    	int s=rem+p;
    	if(s>=d)
    	{
    		int rem2=s-d;
    		if(c<=b+rem2) 
    		{
    			cout<<"YES"<<endl;
    			return 0;
    		}
    		else
    		{
    			cout<<"NO"<<endl;
    			return 0;
    		}
    	}
    	else {
    		cout<<"NO"<<endl;
    		return 0;
    	}
    }
    else 
    {
    	cout<<"NO"<<endl;
    		return 0;
    }

    
    return 0;
}


