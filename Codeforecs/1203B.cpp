
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
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
	int te=Int;
	while(te--)
	{set<int>st;

		int n=Int;
		n=n*4;
		int arr[n+1];
		For(n) arr[i]=Int;
		sort(arr,arr+n);
		int ppp=1;
		for(int i=0,j=n-1;i<n/2;i+=2,j-=2)
		{
			if(arr[i]!=arr[i+1] || arr[j]!=arr[j-1]) {ppp=0;break;}

			int area=arr[i]*arr[j];
			st.insert(area);
		}
		//cout<<"EREWRE"<<st.size()<<endl;
		if(ppp==0) cout<<"NO"<<endl;
		else if(st.size()==1) cout<<"YES"<<endl;
		else if(st.size()!=1) cout<<"NO"<<endl;
	}    
    return 0;
}


