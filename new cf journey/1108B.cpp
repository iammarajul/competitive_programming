
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






int pk[200];
int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n=Int;
    std::vector<int> arr;
    for(int i=0;i<n;i++)
    {
    	int gg;
    	cin>>gg;
    	arr.pb(gg);
    }
    sort(arr.begin(), arr.end());
    //for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    	//cout<<endl;
    
    int ans1,ans2=arr[n-1];

    cout<<ans2<<" ";
    
    for(int i=0;i<n;i++)
    {
    	if(ans2%arr[i]==0) pk[i]=1;
    	if(i!=n-1){if(arr[i]==arr[i+1]) i++;}
    }

    for(int i=n-1;i>=0;i--){

    	//cout<<pk[i]<<" ";
    	if(pk[i]==0)

    	{
    		cout<<arr[i]<<endl;
    		return 0;
    	}
    }
    
  
    
    
    return 0;
}


