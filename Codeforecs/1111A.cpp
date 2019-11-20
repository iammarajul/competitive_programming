
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

    string a,b;
    cin>>a>>b;
    int l1=a.size();
    int l2=b.size();
    if(l1!=l2) {
    	cout<<"No"<<endl;
    }

    else
    {
    	int t=0;
    	for(int i=0;i<l1;i++)
    	{
    		if(a[i]!=b[i])
    		{
    			if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
    			{
    				if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u')
    				{

    				}
    				else
    				{
    					t=1;
    					break;
    				}
    			}
    			else
    			{
    				if(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u')
    				{
    					t=1;
    					break;
    				}
    			}
    		}
    		
    	}

    	if(t==0) cout<<"Yes"<<endl;
    	else cout<<"No"<<endl;

    }

    
    return 0;
}


