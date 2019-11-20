
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
#define  MAX              100007;





int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    
    int n=Int,m=Int;

    int arr1[n+1][m+1];
    int arr2[n+1][m+1];
    std::vector<int> v1,f1,f2;
    std::vector<int> v2;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		cin>>arr1[i][j];
    		v1.pb(arr1[i][j]);
    	}
    }
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<m;j++)
    	{
    		cin>>arr2[i][j];
    		v2.pb(arr2[i][j]);
    	}
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    for(int i=0;i<v1.size();i++)
    {
    	if(v1[i]!=v2[i])
    	{
    		cout<<"NO"<<endl;
    		return 0;
    	}
    }

    for(int j=0;j<m;j++)
    {
    	f1.clear();
    	f2.clear();
    	int ii=0,jj=j;
    	while(ii<n && jj>=0)
    	{
    		f1.pb(arr1[ii][jj]);
    		f2.pb(arr2[ii][jj]);
    		ii++,jj--;
    	}
    	sort(f1.begin(), f1.end());
    	sort(f2.begin(), f2.end());
    	for(int i=0;i<f1.size();i++)
    	{
    		if(f1[i]!=f2[i])
    		{
    			cout<<"NO"<<endl;
    			return 0;
    		}
    	}

    }

    for(int j=0;j<n;j++)
    {
    	f1.clear();
    	f2.clear();
    	int ii=j,jj=m-1;
    	while(ii<n && jj>=0)
    	{
    		f1.pb(arr1[ii][jj]);
    		f2.pb(arr2[ii][jj]);
    		ii++,jj--;
    	}
    	sort(f1.begin(), f1.end());
    	sort(f2.begin(), f2.end());
    	for(int i=0;i<f1.size();i++)
    	{
    		if(f1[i]!=f2[i])
    		{
    			cout<<"NO"<<endl;
    			return 0;
    		}
    	}

    }

    cout<<"YES"<<endl;



    return 0;
}


