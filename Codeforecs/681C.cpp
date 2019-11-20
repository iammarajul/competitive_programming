
#include<bits/stdc++.h>
using namespace std;

//#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cout.setf(ios::fixed); cout.precision(20)

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








int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//FAST_IO;

	int q = Int;
	priority_queue<int, vector<int> , greater<int> >qu;
	std::vector<pair<string , int>> v;
	while (q--)
	{
		string s;
		int n;
		cin >> s;
		if (s.compare("insert") == 0)
		{	cin >> n;
			qu.push(n);
			v.pb({"insert", n});
			//cout<<"insert "<<n<<endl;
		}
		else if (s.compare("removeMin") == 0)
		{
			if (qu.size()) {qu.pop(); v.pb({"removeMin", 0});}
			else
			{
				v.pb({"insert", 1});
				v.pb({"removeMin", 0});

			}
		}
		else
		{
			int n;
			cin >> n;
			while (!qu.empty())
			{
				if (qu.top() >= n) break;
				else
				{
					qu.pop();
					v.pb({"removeMin", 0});
				}
			}
			if (!qu.empty() && qu.top() == n ) v.pb({"getMin", n});
			else
			{
				v.pb({"insert", n});
				qu.push(n);
				v.pb({"getMin", n});
			}
		}
	}
	printf("%d\n", v.size());
	for (int i = 0; i < v.size(); i++)
	{
		if (v[i].first.compare("removeMin") == 0) printf("removeMin\n");
		else if(v[i].first.compare("insert") == 0)  printf("insert %d\n",v[i].second);
		else printf("getMin %d\n",v[i].second );
	}

	return 0;
}


