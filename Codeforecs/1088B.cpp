
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

	int n=Int,k=Int;
	int arr[n+1];
	For(n) arr[i]=Int;

	sort(arr,arr+n);

	ll sum=0;
	for(int j=0,i=0;j<k;i++)
	{
		if(i>n-1) {
			cout<<0<<endl;
			j++;
		}
		else{
		int dd=arr[i]-sum;
		if(dd==0) {

		}
		else{
			cout<<dd<<endl;
			sum+=dd;
			j++;
		}
		}

	}


    
    return 0;
}


