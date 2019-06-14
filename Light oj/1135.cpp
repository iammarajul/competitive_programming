
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


int n, k, q;
int arr[100007];
int len;
int dp[325][3];
int lazy[325];


void update(int l, int r, int y)
{
    int c1 = l / len, c2 = r / len;

    if (c1 == c2)
    {
        for (int i = l; i <= r; i++)
        {
            dp[i / len][arr[i] % k]--;
            arr[i] += y;
            dp[i / len][arr[i] % k]++;
        }
    }
    else
    {
        for (int i = l, end = (c1 + 1) * len - 1; i <= end; i++)
        {
            dp[i / len][arr[i] % k]--;
            arr[i] += y;
            dp[i / len][arr[i] % k]++;

        }
        for (int i = c1 + 1; i <= c2 - 1; i++)
        {
            lazy[i] = (lazy[i] + y) % k;
        }
        for (int i = c2 * len; i <= r; i++)
        {
            dp[i / len][arr[i] % k]--;
            arr[i] += y;
            dp[i / len][arr[i] % k]++;
        }

    }

}

int quary(int l, int r)
{
    int c1 = l / len, c2 = r / len;
    int ans = 0;
    if (c1 == c2)
    {
        for (int i = l; i <= r; i++)
        {
            if ((arr[i] + lazy[i / len]) % k == 0) ans++;
        }
    }
    else
    {
        for (int i = l, end = (c1 + 1) * len - 1; i <= end; i++)
        {
            if ((arr[i] % k + lazy[i / len]) % k == 0) ans++;
        }
        for (int i = c1 + 1; i <= c2 - 1; i++)
        {
            ans += dp[i][(k - lazy[i]) % k];
            //cout<<dp[i][(k-lazy[i])%k]<<endl;

        }
        for (int i = c2 * len; i <= r; i++)
        {
            if ((arr[i] % k + lazy[i / len]) % k == 0) ans++;
        }



    }
    return ans;
}

int main() {

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int tes = Int;
    for (int te = 1; te <= tes; te++) {
        n = Int, q = Int, k = 3;
        len = sqrt(n);

        memset(dp, 0, sizeof(dp));
        memset(lazy, 0, sizeof(lazy));
        memset(arr, 0, sizeof(int)*(n+1));



        //cout<<len<<endl;
        for (int i = 0; i < n; i++)
        {

            dp[i / len][arr[i] % k]++;
        }
        printf("Case %d:\n", te );
        while (q--)
        {
            int nn = Int;

            if (nn == 1)
            {
                int l = Int, r = Int;
                cout << quary(l, r) << endl;
            }

            else
            {
                int l = Int, r = Int;
                update(l, r, 1);
            }
        }
    }


    return 0;
}


