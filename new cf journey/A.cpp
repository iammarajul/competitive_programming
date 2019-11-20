
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
#define  MAX              100007




int arr[100005];



int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	arr[1]=1;
	int tes = Int;
	for (int i = 1; i <= 100000; i++)
	{
		int x=i;
		set<int>st;
		set<int>::iterator it;
		while(x>0)
		{
			int p=x%10;
			x=x/10;
			st.insert(p);
		}
		it=st.begin();
		int a1=*it;it++;
		int a2=*it;
		if(st.size()==2 && ( a1==0 && a2==1)) arr[i]=1;
		if((st.size()==1) && a1==1)  arr[i]=1;
	}
	for(int i=2;i<=100000;i++) arr[i]+=arr[i-1];
	for (int te = 1; te <= tes; te++)
	{
		int n=Int;

		cout<<"Case "<<te<<": "; 
		cout<<arr[n]<<endl;

	}


	return 0;
}


