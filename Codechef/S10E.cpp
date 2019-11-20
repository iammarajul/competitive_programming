
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

    int tes=Int;
    while(tes--)
    {
    	int n=Int;
    	int arr[n+1];
    	For(n) arr[i]=Int;
    	int cnt =0;
    	for(int i=0;i<n;i++)
    	{
    		int p=1;
    		for(int j=i-1;j>=max(0,i-2-3);j--)
    		{
    			if(arr[i]>=arr[j]){
    				p=0;
    				break;
    			}
    		}
    		if(p==1) {cnt++;}
    	}
    	cout<<cnt<<endl;
    }
    
    return 0;
}


