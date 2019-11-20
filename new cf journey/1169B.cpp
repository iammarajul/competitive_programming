
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





int a[300004];
int b[300004];
int vis1[300004];
int vis2[300004];


int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int;
	int m = Int;

	for (int i = 0; i < m; i++)
	{
		a[i] = Int;
		b[i] = Int;
	}

	for (int i = 0; i < m; i++)
	{
		if (a[i] == a[0] || b[i] == a[0]) vis1[i] = 1;
	}
	for (int i = 0; i < m; i++)
	{
		if (a[i] == b[0] || b[i] == b[0]) vis2[i] = 1;
	}
	int x, y;
	bool tr = 0;
	int p1 = 1, p2 = 0;
	int cnt0=0,cnt1=0,cnt2=0;
	for (int i = 0; i < m; i++)
	{
		if (!vis1[i])
		{
			cnt0++;
			if (tr) {

					if (x == a[i] || x == b[i] )
					{
						cnt1++;
					}
					if (y == a[i] || y == b[i])
					{
						cnt2++;
						//cout<<"M"<<i<<endl;
					}

			}
			else
			{
				tr = 1;
				x = a[i]; y = b[i];
				//cout<<"N"<<i<<endl;

			}
		}

	}

	//cout<<"     "<<cnt0<<" "<<cnt1<<" "<<cnt2<<endl;

	if(cnt0== cnt1+1 || cnt0== cnt2+1) p1=0;
	else p1=1;
	if(cnt0== 0 ) p1=0;
	int cnt20=0,cnt21=0,cnt22=0;tr = 0;
	for (int i = 0; i < m; i++)
	{
		if (!vis2[i])
		{
			cnt20++;
			if (tr) {

				if (x == a[i] || x == b[i] )
				{
					cnt21++;
				}
				if (y == a[i] || y == b[i])
				{
					cnt22++;
				}

			}
			else
			{
				tr = 1;
				x = a[i]; y = b[i];
				//cout<<x<<"      "<<y<<endl;

			}
		}

	}
	
	if (cnt20 == cnt21+1 || cnt20 == cnt22+1) p2 = 0;
	else p2 = 1;
	if(cnt20== 0 ) p2=0;

	//cout<<p1<< " "<<p2<<endl;

	//cout << cnt20 << " " << cnt21 <<" "<<cnt22<< endl;

	if (p1 && p2) cout << "NO" << endl;
	else cout << "YES"
		          << endl;






	return 0;
}


