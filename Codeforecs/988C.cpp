
#include<bits/stdc++.h>
using namespace std;



int sc1() {int x; scanf("%d", &x); return x;}

long long sc2() {long long x; scanf("%lld", &x); return x;}

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




struct no
{
	ll su;
	int nb;
	int ind;
}ans[200005];
bool cmp(no A,no B)
{
	if(A.su!=B.su) return A.su<B.su;
	if(A.nb!=B.nb) return A.nb<B.nb;
	if(A.ind!=B.ind) return A.nb<B.nb;

}


int main()
{
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int te = Int;
	int cnt =0;
	for (int i = 0; i < te; i++)
	{
		int n = Int;
		int arr[n+1];
		ll sum=0;
		for(int j=0;j<n;j++) arr[j]=Int,sum+=(ll)arr[j];

		for(int j=0;j<n;j++) ans[cnt].su=sum-arr[j],ans[cnt].nb=i,ans[cnt++].ind=j;

	}
	sort(ans,ans+cnt,cmp);

	for(int i=0;i<cnt-1;i++)
	{
		if(ans[i].su==ans[i+1].su && ans[i].nb!=ans[i+1].nb)
		{
			cout<<"YES"<<endl;
			cout<<++ans[i].nb<<" "<<++ans[i].ind<<endl;
			cout<<++ans[i+1].nb<<" "<<++ans[i+1].ind<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;


	return 0;
}


