
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

    int tes=Int;
    while(tes--)
    {

    	int arr[200];
    	memset(arr,0,sizeof(arr));
    	string s;
    	cin>>s;
    	int n=s.size();
    	for(int i=0;i<n;i++){
    		int j=i;
    		int cnt =0;
    		while(1)
    		{
    			if(s[i]!=s[j] || j>=n) break;
    			cnt++;
    			j++;
    		}
    		if(cnt%2!=0) arr[s[i]]++;
    		i=j-1;
    	}

    	// if(s[n-2]!=s[n-1]) arr[s[n-1]]++;

    	for(int i='a';i<='z';i++)
    	{
    		if(arr[i]) cout<<(char)i;
    	}
    	cout<<endl;
    }
    
    return 0;
}


