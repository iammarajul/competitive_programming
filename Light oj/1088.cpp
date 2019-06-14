
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



int bs(int arr[],int x,int n)
{
	int lo=0,hi=n-1;
	int index=0;
	int p=0;
	while(lo<=hi)
	{
		int mid=(lo+hi)/2;

		if(arr[mid]==x)
		{
			index=mid;
			hi=mid-1;
			p=1;

		}
		else if(arr[mid]<x){
			if(p==0)
			index=mid;
			lo=mid+1;

		}
		else 
		{
			hi=mid-1;
		}
	}

	if(arr[index]<x) index++;
	return index;

}

int us(int arr[],int x,int n)
{
	int lo=0,hi=n-1;
	int index=0;
	int p=0;
	while(lo<=hi)
	{
		int mid=(lo+hi)/2;

		if(arr[mid]==x)
		{
			index=mid;
			hi=mid-1;
			p=1;

		}
		else if(arr[mid]<x){
			if(p==0)
			index=mid;
			lo=mid+1;

		}
		else 
		{
			hi=mid-1;
		}
	}

	//if(arr[index]<x) index++;
	return index;

}





int main()
{

	int t=Int;

	//int arr[]={10,20,30,40,50,60};

	//cout<<bs(arr,11,6)<<endl;

	for(int test=1;test<=t;test++)
	{
		int n=Int,q=Int;

		int arr[n+1];
		For(n) arr[i]=Int;
		sort(arr,arr+n);
		printf("Case %d:\n",test);
		while(q--)
		{
			int a=Int,b=Int;

			int x=bs(arr,a,n);
			int y=us(arr,b,n);

			//cout<<x<<" "<<y<<endl;
			if(a<arr[0] && b<arr[0]) printf("0\n");
			else
			printf("%d\n",y-x+1);

		}


	}
    
    return 0;
}


