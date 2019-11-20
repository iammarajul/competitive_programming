
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






int odd[200005];int even[200005];
int main()
{
	//freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n=Int;

   int arr[n+1];
   
   for(int i=1;i<=n;i++) {
   		arr[i]=Int;
   		if(i%2==0){
   			even[i]=arr[i];
   			odd[i]=0;
   		}
   		else{
   			even[i]=0;
   			odd[i]=arr[i];
   		}

   }

   for(int i=1;i<n;i++)
   {
   		odd[i+1]+=odd[i];
   		even[i+1]+=even[i];
   }
  //for(int i=1;i<=n;i++) cout<<odd[i]<<" ";
   	//cout<<endl;
   //for(int i=1;i<=n;i++) cout<<even[i]<<" ";
   //	cout<<endl;

   int ans=0;
   for(int i=1;i<=n;i++)
   {
   		int odd1=0,even1=0;
   		if(i%2==0)
   		{
   			odd1=odd[i];
   			even1=even[i]-arr[i];
   			odd1+=(even[n]-even[i]);
   			even1+=(odd[n]-odd[i]);
   		}
   		else
   		{
   			odd1=odd[i]-arr[i];
   			if(i!=1) even1=even[i-1];
   			else even1=0;
   			odd1+=(even[n]-even[i]);
   			even1+=(odd[n]-odd[i]);
   		}
   		if(odd1==even1){ ans++;}
   }

   cout<<ans<<endl;


    return 0;
}


