
#include<bits/stdc++.h>
using namespace std;



int sc1(){int x; scanf("%d",&x); return x;}

long long sc2(){long long x;scanf("%lld",&x);return x;}


long long POW(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = POW(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}

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
    int arr[n+1];
    int sum=0;
    For(n)
    {
    	arr[i]=Int;
    	sum+=arr[i];
    }

    sort(arr,arr+n);
    int ans=sum;
    for(int i=n-1;i>=1;i--)
    {
    	int x=arr[i];
    	
    	
    	for(int j=1;j<=arr[i];j++)
    	{
    		if(x%j==0)
    		{	int jj=sum;
    			jj-=(arr[0]+x);
    			//cout<<jj<<" ";
    			jj+=(arr[0]*j)+(x/j);
    			//cout<<(arr[0]*j)+(x/j)<<"?"<<jj<<" ";
    			ans=min(ans,jj);

    		}
    	}
    	//cout<<endl;
    } 

    cout<<ans<<endl;
    
    return 0;
}


