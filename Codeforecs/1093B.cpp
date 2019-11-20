
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







int main()
{

	int n;
	cin>>n;

	while(n--)
	{
		string s;
		cin>>s;

		int p=true;
		for(int i=0;i<s.size()-1;i++)
		{
			if(s[i]!=s[i+1]) p=false;
		}

		if(p==true) cout<<-1<<endl;
		else{
		int l=s.size();

		int arr[300];
		for(int i=0;i<300;i++) arr[i]=0;
		for(int i=0;i<l;i++)
		{
			arr[(int)s[i]]++;
		}
		for(int i=97;i<=122;i++)
		{
			for(int j=1;j<=arr[i];j++)
			{
				cout<<(char)i;
			}
		}
		cout<<endl;
	}
}
    
    return 0;
}


