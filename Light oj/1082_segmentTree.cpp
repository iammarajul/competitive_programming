
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
#define  M 				  100006
#define  max 			  99999999


void ins(int arr[M],int s,int e,int node,int tree[M*3])
{
	if(s==e)
	{
		tree[node]=arr[s];
		return;
	}
	int l=node*2;
	int r=node*2+1;
	int mid=(s+e)/2;

	ins(arr,int s,int mid,l);
	ins(arr,int mid+1,int e,l);
	tree[node]=min(tree[node*2],tree[node*2+1]);


}

int quary(int tree[n*3],int a,int b,int i,int j)
{
	if(b<i || j<a) return max;
	if()



}




int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n=Int,q=Int;
    int arr[n+1];
    For1(n) arr[i]=Int;
    int tree[n*3];
    ins(arr,0,n,1,tree);
    while(q--)
    {
    	int a=Int,b=Int;

    }
    return 0;
}


