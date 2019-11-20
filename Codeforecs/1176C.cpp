
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






int pk[] = {4, 8, 15, 16, 23, 42};
int cur[50];
int rl[50];

int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int;

	int arr[n + 1];

	For(n) arr[i] = Int;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= 5; j++) {
			
			 if (arr[i] == pk[j])
			{	
				if (j == 0) {cur[pk[j]]++;}
				else if (j == 5)
				{
					int xx = cur[pk[j - 1]];
					if (xx)
					{
						cur[pk[j - 1]]--;
						cur[pk[j]]++;
						rl[pk[j - 1]]++;
						rl[pk[j]]++;
					}
				}
				else {
					int xx = cur[pk[j - 1]];//cout<<xx<<" "<<pk[j-1]<<endl;
					if (xx)
					{
						
						cur[pk[j - 1]]--;
						cur[pk[j]]++;
						rl[pk[j - 1]]++;
					}
				}
			}

		}
	}
	int mi = 999999999;
	for (int i = 0; i <= 5; i++)
	{
		mi = min(mi, rl[pk[i]]);
		cout<<rl[pk[i]]<<endl;
	}
	cout << n - (mi * 6) << endl;


	return 0;
}



/*

14
4 4 4 4 4 8 15 16 8 23 42 16 23 42
*/