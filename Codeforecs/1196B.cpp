
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
#define  MAX              100007








int main()
{	
	
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int t=Int;
    while(t--)
    {
    	int n,k;
    	cin>>n>>k;

    	int arr[n+1];
    	int cnt =0;
    	For(n) {arr[i]=Int;if(arr[i]%2!=0) cnt++;}
    	int xx=cnt-(k-1);
    	if(xx<=0 || xx%2==0) puts("NO");
    	else
    	{
    		std::vector<int> v;
    		int kk=0;
    		puts("YES");
    		
    		for(int i=0;i<n;i++)
    		{
    			if(kk==k-1) break;
    			if(arr[i]%2!=0) {v.pb(i+1);kk++;}
    			
    		}
    		 v.pb(n);
    		for(int i=0;i<(int) v.size();i++)
    		{
    			cout<<v[i];
    			if(i!=(int) (v.size()) -1) cout<<" ";
    		}
    		cout<<endl;
    	}

    }
    
    
    return 0;
}


