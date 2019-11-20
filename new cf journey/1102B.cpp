
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




int pk[5006];
//int pk2[5006];


int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n=Int,k=Int;

    int arr[n+1];
    
    For(n) {
    	arr[i]=Int;
    	pk[arr[i]]++;
    }
    int mx=0;
    int cnt=0;
    for(int i=1;i<=5000;i++)
    {
    	if(pk[i]!=0) cnt++;
    	mx=max(mx,pk[i]);
    }

    if(mx>k )
    {
    	cout<<"NO"<<endl;
    	return 0;
    }
    cout<<"YES"<<endl;
    if(mx==k){
    for(int i=0;i<n;i++)
    {
    	int vv=arr[i];
    	cout<<pk[arr[i]]<<" ";
    	pk[arr[i]]--;
    }
    cout<<endl;
	}
	else if(mx<k)
	{
		std::vector<int> v[5004];

		for(int i=0;i<k;i++)
		{
			v[arr[i]].pb(i+1);
		}

		for(int i=1;i<=k;i++)
		{
			cout<<i<<" ";
		}
		for(int i=k;i<n;i++)
		{
			int bb=arr[i];int kko=0;
				if(v[bb].size()==0) {
					cout<<1<<endl;
					v[bb].pb(1);
				}
				else{
			for(int l=1;l<=k;l++)
			{

				for(int l1=0;l1<v[bb].size();l1++){
					if(v[bb][l1]!=l)
					{
						v[bb].pb(l);
						kko=1;
						cout<<l<<" ";
						break;
					}
				}
				if(kko==1) break;
			}
		}

		}
	}



    
    return 0;
}


