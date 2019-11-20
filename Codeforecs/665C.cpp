
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
	string s;
	cin>>s;

	for(int i=0;i<s.size();i++)
	{
		int cnt=0;
		for(int j=i+1;1;j++)
		{
			cnt++;
			if(s[i]!=s[j]){
				i=j-1;
				break;
			}
			
		}

		if(cnt>=3)
		{
			for(int  j=i+1;j<=i-1+cnt-1;j++)
			{

				if(s[i-1]!='z')
					s[i]=s[i-1]+1;
				else
				{
					s[i]='a';
				}
				if(j==i-1+cnt-1)
				{
					if(s[i]==s[i+1])
					{
						if(s[i+1]!='p' && s[i+1]!='p') s[i]='p';
						else if(s[i+1]=='p' && s[i+1]!='e') s[i]='e';
						else if()
					}
				}
			}	

		}

	} 

	cout<<s<<endl;
    return 0;
}


