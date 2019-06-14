
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
    int n;
    cin>>n;
    int arr[n+1];
    int sum=0;
    For(n) 
    {
    	arr[i]=Int;
    	sum+=arr[i];
    }
    if(sum%360==0) cout<<"YES"<<endl;
    else 
    {
    	sort(arr,arr+n);
    	int lo=1,hi=n-2;
    	int lsum=arr[0],rsum=arr[n-1];
    	while(lo<=hi)
    	{
    		if(lsum<rsum) lsum+=arr[lo++];
    		else if(lsum>rsum) rsum+=arr[hi--];
    		else lsum+=arr[lo++];
    	}
    	if(lsum-rsum==0) cout<<"YES"<<endl;
    	else cout<<"NO"<<endl;
    }

    
    return 0;
}


