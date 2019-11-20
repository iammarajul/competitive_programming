
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

    int n=Int;

    int arr[n+1][n+1];

    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		char x;
    		cin>>x;
    		if(x>='A' && x<='Z') x+=32;
    		arr[i][j]=x-'a'+1;
    	}
    }

    for(int i=0;i<n;i++)
    {
    	int sum =0;
    	for(int j=0;j<n;j++) sum+=arr[i][j]; 
    		cout<<sum<<endl;
    }
    int ans=0;
    for(int j=0;j<n;j++)
    {
    	int sum =0;
    	for(int i=0;i<n;i++)
    	{
    		sum+=arr[i][j];
    	}
    	cout<<sum<<endl;
    	ans+=sum;
    }


    int sum=0;
    for(int i=0;i<n;i++)
    {
    	sum+=arr[i][i];
    }
    cout<<sum<<endl;
    sum=0;
    int cnt =n-1;
    for(int i=0;i<n;i++)
    {
    	sum+=arr[i][cnt--];
    }
    cout<<sum<<endl<<ans<<endl;




    
    return 0;
}


