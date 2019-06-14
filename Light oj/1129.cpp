
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


int ans;
struct node
{
	bool en;

	node* next[11];

	node()
	{
		en = 0;
		for (int i = 0; i < 11; i++) next[i] = NULL;
	}

}*root;


void insert(string s)

{
	node* cur = root;
	int len=s.size();
	for (int i = 0; s[i]; i++)
	{
		int x = s[i] - '0';
		if (cur->next[x] == NULL) cur->next[x] = new node();

		if (cur->en == 1) ans = 1;
		//cout<<ans<<" ";
		cur = cur->next[x];
		
	}


	cur->en = 1;
}

void del(node* cur)
{
    for (int i = 0; i < 11; i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete (cur);
}



int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int tes = Int;
	for (int te = 1; te <= tes; te++) {
		int n = Int;
		root = new node();
		ans = 0;
		std::vector<string> v;
		for(int i=0;i<n;i++)
		{
			string s;
			cin >> s;
			v.pb(s);

		}
		sort(v.begin(), v.end());
		//printf("Case %d: ", te);
		for(int i=0;i<n;i++)
		{
			insert(v[i]);
			if (ans == 1) {cout << "NO" << endl;break;}
		}
		//
		
		if(ans == 0) cout << "YES" << endl;

		del(root);


	}






	return 0;
}


