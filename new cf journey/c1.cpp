
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

bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int arr[100000];
void pre()
{
	for(int i=0;i<=(2<<10);i++)
	{
		int ans=0;
		for(int j=0;j<=8;j++)
		{
			if(Check(i,j)==1) ans+= (int) (powl(3,j));
		}
		if(i<=100) cout<<ans<<endl;
		
		arr[ans]=1;
	}

}



int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    pre();

    int tes=Int;

    //cout<<v.size()<<" "<<v[2];



    while(tes--)
    {
    	int n=Int;

    	for(int j=n;1;j++)
    	{
    		if(arr[j]==1) {cout<<j<<endl;break;}
    	}


    }
    
    return 0;
}


