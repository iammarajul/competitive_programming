
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

std::vector<int> v1;

void pos(int n)
{
	v1.erase(v1.begin(), v1.end());
	int cnt=1;
	while(n>0)
	{
		
		if(n%2) {v1.pb(cnt);}
		n/=2;
		cnt++;
	}

	//reverse(v1.begin(), v1.end());

	//for(int i=0;i<v1.size();i++) cout<<v1[i]<<" ";

	


}





int main()
{	
	
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    while(1)
    {
    	int n=Int;
    	if(n == 0) return 0;
    	pos(n);

    	int num1=0,num2=0;
    	for(int i=0;i<v1.size();i+=2)
    	{
    		num1=num1 | (1<<(v1[i]-1));
    		//cout<<v1[i]<<" "<<num1<<endl;
    	}

    	for(int i=1;i<v1.size();i+=2)
    	{
    		num2=num2 | (1<<(v1[i]-1));
    	}

    	cout<<num1<<" "<<num2<<endl;


    }
    
    
    return 0;
}


