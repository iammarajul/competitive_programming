
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

	string a,b;
	cin>>a>>b;
	int x1=(int) a[0]-'a'+1;
	int y1=(int) a[1]-'0';
	int x2=(int) b[0]-'a'+1;
	int y2=(int) b[1]-'0';
	std::vector<string> vc;


	int q=x2-x1;
	int p=y2-y1;
	//cout<<p<<" "<<q<<endl;
	int mi=min(abs(p),abs(q));
	for(int i=0;i<mi;i++){
		string s="";
		if(q>0) s.pb('R');
		else s.pb('L');
		if(p>0) s.pb('U');
		else s.pb('D');
		vc.pb(s);
	}

	int mx=(max(abs(p),abs(q)))-mi;
	for(int i=0;i<mx;i++){
		if(abs(q)==mi)
		{
			if(p>0) vc.pb("U");
			else vc.pb("D");
		} 
		else 
		{
			if(q>0) vc.pb("R");
			else vc.pb("L");
		}
	}

	cout<<vc.size()<<endl;
	for (int i = 0; i < vc.size(); ++i)
	{
		cout<<vc[i]<<endl;
		/* code */
	}

    
    return 0;
}


