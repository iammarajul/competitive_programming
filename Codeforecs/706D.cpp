
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



struct node
{
	int cnt;
	node* next[2];
	node()
	{
		cnt = 0;
		next[0] = NULL;
		next[1] = NULL;
	}
};

node* root ;

void add(int n)
{
	node* curr = root;
	for (int i = 30; i >= 0; i--)
	{
		bool bit = (n & (1 << i))  ;
		//cout<<bit<<" "<<i<<endl;
		if (curr->next[bit] == NULL) curr->next[bit] = new node();
		curr = curr->next[bit];
		curr->cnt++;
	}
}
void del(int n)
{
	node* curr = root;
	for (int i = 30; i >= 0; i--)
	{
		bool bit = (n & (1 << i));
		//if(curr->next[bit] ==NULL) curr->next[bit] = new node();
		curr = curr->next[bit];
		curr->cnt--;
	}
}

int F(int n)
{
	node* curr = root;
	int res = 0;
	for (int i = 30; i >= 0; i--)
	{
		bool bit = (n & (1 << i));
		//cout<<bit<<endl;
		if (curr->next[bit ^ 1] != NULL && curr->next[bit ^ 1]->cnt > 0) {res |= (1 << i);curr=curr->next[bit^ 1];}
		else if(curr->next[bit] != NULL)curr=curr->next[bit];

	}
	return res;
}


int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int q = Int;
	root  = new node();
	add(0);
	while (q--)
	{
		char x;
		cin >> x;
		int n = Int;
		if (x == '+')
		{

			add(n);
		}
		else if (x == '-') del(n);
		else
		{
			cout << F(n) << endl;
		}
	}

	return 0;
}


