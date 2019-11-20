
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






int arr[102];

int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n,k;
    cin>>n>>k;
    int cnt1=0,cnt2=0;

    for(int i=1;i<=n;i++) {
    	cin>>arr[i];
    	if(arr[i]==-1) cnt1++;
    	else cnt2++;
    }
	std::vector<int> v;
	for(int i=1;i<=n;i++)
	{
		int pk1=0,pk2=0;
		for(int j=i;j<=n;j+=k)
		{
			if(arr[j]==-1) pk1++;
			else pk2++;
		}
		for(int j=i-k;j>=1;j-=k)
		{
			if(arr[j]==-1) pk1++;
			else pk2++;
		}
		pk1=cnt1-pk1;
		pk2=cnt2-pk2;
		int x=abs(pk1-pk2);
		v.pb(x);
	}
	sort(v.begin(), v.end());
	cout<<v[n-1]<<endl;


    return 0;
}


