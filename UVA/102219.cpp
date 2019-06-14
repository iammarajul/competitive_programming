
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



string s;
string arr[1000001];
string tmp[1000001];

void rightRotation(int n)
{
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tmp[i][j] = arr[n - j - 1] [ i];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if(tmp[i][j] == '>') tmp[i][j] = 'v';
			else if(tmp[i][j] == '<') tmp[i][j] = '^';
			else if(tmp[i][j] == '^') tmp[i][j] = '>';
			else if(tmp[i][j] == 'v') tmp[i][j] = '<';
			arr[i] [j] = tmp[i] [j];
		}
	}
}

void leftRoatation(int n)
{
	//string tmp[1001];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			tmp[i][j] = arr[j] [n-i-1];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{

			if(tmp[i][j] == '>') tmp[i][j] = '^';
			else if(tmp[i][j] == '<') tmp[i][j] = 'v';
			else if(tmp[i][j] == '^') tmp[i][j] = '<';
			else if(tmp[i][j] == 'v') tmp[i][j] = '>';
			arr[i] [j] = tmp[i] [j];
		}
		
	}
}


int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n = Int;

	cin >> s;
	For(n) cin >> arr[i];

	for(int i=0;i<(int)s.size();i++)
	{
		if(s[i]=='L') leftRoatation(n);
		else rightRotation(n);
	}

	For(n){
		Forj(n) cout<<arr[i][j];
		cout<<endl;
	}
	

	//rightRotation(n);



	return 0;
}


