
#include<bits/stdc++.h>
using namespace std;
 
 
 
int sc1() {int x; scanf("%d", &x); return x;}
 
long long sc2() {long long x; scanf("%lld", &x); return x;}
 

 
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


const int mod           = 1e9 + 7;
const int inf           = (int)2e9 + 5;
const ll  Inf           = (ll)1e18 + 5;
const int N             = 5e6 + 5;
 
inline int add(int a, int b) {a += b; return a >= mod ? a - mod : a;}
inline int sub(int a, int b) {a -= b; return a < 0 ? a + mod : a;}
inline int mul(int a, int b) {return (ll)a * b % mod;}
 

 
 
 
void solve() {
 
 	ll a,b,n,s;
 	cin>>a>>b>>n>>s;

 	ll x=s/n;
 	ll y=s%n;

 	if(x<=a && y<=b) puts("YES");
 	else {
 		if(x>a && s<=b+(a*n))
 		{
 			puts("YES");
 		}
 		else puts("NO");

 	}
 	
 
    return;
}
 
 
 
 
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
 
    int test = 1, tc = 0;
    scanf("%d", &test);
    //cin >> test;
    while (test--) {
        //printf("Case %d: ", ++tc);
        solve();
    }
 
    return 0;
 
 
 
 
}


