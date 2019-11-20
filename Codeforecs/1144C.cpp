
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

    int n=Int;
    int arr[n];
    For(n) arr[i]=Int;

    sort(arr,arr+n);
    std::vector<int> v1;
    std::vector<int> v2;
    for(int i=0;i<n;i++)
    {
    	int x=arr[i];int j=i,cnt=0;
    	for(;j<n;j++)
    	{
    		if(arr[j]!=x) break;
    		cnt++;
    	}

    	if(cnt>2) {cout<<"NO"<<endl;return 0;}
    	else if(cnt==2) { v1.pb(x);v2.pb(x);}
    	else v2.pb(x);

    	i=j-1;
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(),greater<int>());

    cout<<"YES"<<endl;
    cout<<v1.size()<<endl;
    if(v1.size()==0) {
    	cout<<endl;
    }
    else
    {
    	for(int i=0;i<v1.size();i++)
    	{
    		cout<<v1[i];
    		if(i!=v1.size()-1) cout<<" ";
    	}
    	cout<<endl;
    }

    cout<<v2.size()<<endl;
    for(int i=0;i<v2.size();i++)
    	{
    		cout<<v2[i];
    		if(i!=v2.size()-1) cout<<" ";
    	}
    	cout<<endl;



    
    
    return 0;
}


