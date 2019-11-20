#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main()
{
	int n;
	cin>>n;
	int abc=0,d=1;
	for(int i=1;i<=n;i++)
	{
		int nd = (3LL*abc)%mod;
		cout<<nd<<endl;
		int nabc = (2LL*abc + d)%mod;
		cout<<nabc<<endl;
		d = nd,abc = nabc;
	}
	cout<<d<<endl;
}