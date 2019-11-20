
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



string gray(string s,int l,int r){
	if(l>=r) return s;
	swap(s[l],s[r]);
	gray(s,l+1,r-1);
}



int main()
{
	string s="abcdefghi";
	
	cout<<gray(s,0,s.size()-1)<<endl;

    //for(int i=3;i>=0;i--) gray(i);
    //(int i=0;i<=3;i++) cout<<arr[i];

    return 0;
}


