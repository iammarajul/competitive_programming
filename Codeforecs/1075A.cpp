/*
  Bismillah hir rahman nir raheem
        Author- marajul islam
             CSE,BSMRSTU

*/

#include<bits/stdc++.h>
using namespace std;





#define  gcd(a,b)         __gcd(a,b)
#define  lcm(a,b)         (a*b)/gcd(a,b)
#define  ini              sc1()
#define  lli              sc2()
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

	ll  n,x,y;
	cin>>n>>x>>y;

	ll wh=(max(x,y)-min(x,y))+(min(x,y)-1);
	ll bl=(max(x,y)-min(x,y))+(n-min(x,y));
	cout<<wh<<" "<<bl<<endl;
	/* code */
	return 0;
}
