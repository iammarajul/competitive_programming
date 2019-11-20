
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
#define  MAX              100007





int x[2001];
int y[2001];
int z[2001];
int k[2001];


int main()
{

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n = Int;

    int arr[n+1],arr2[n+1];
    int mx=0;
    for (int i = 0; i < n; i++)
    {
        int a = Int, b = Int;

        arr[i]=a,arr2[i]=b;
        mx=max(mx,a);
        mx=max(mx,b);

    }
    for(int i=0;i<n;i++){

        int a = arr[i],b = arr2[i];
        if (a > b) x[a - b]++;
        else if (b > a) y[b - a]++;
        else x[0]++;

        if (a + b > mx) k[a + b]++;
        else if (a + b < mx) z[a + b]++;
        else z[a + b]++;
    }
    ll ans = 0;
    for (int i = 0; i <= 2*mx; i++)
    {

       


        if (i > mx) {
            int kk ;
           
            kk = k[i];// if(kk) cout<<kk<<" "<<i<<endl;
            ans += ((kk * (kk - 1) )/2);
        }
        else
        {
            int xx = x[i];
            int yy = y[i];
            int zz = z[i];
            //if(xx || yy || zz) cout<<xx<<" "<<yy<<" "<<zz<<endl;
            ans += (ll)((xx * (xx - 1))/2 + (yy * (yy - 1))/2 + (zz * (zz - 1))/2  ) ;
        }


    }



    //if (n == 5) ans = 6;
    cout << ans << endl;


    return 0;
}


