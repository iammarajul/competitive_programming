
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




int dp[320][200007];
int arr[100007];
int lazy[320];
int len, n, q;

void update(int l, int r, int v)
{
    l--; r--;

    
    int c_l = l / len,   c_r = r / len;
    if (c_l == c_r) {
        for (int i = l; i <= r; ++i) {
            dp[i / len][arr[i]]--;
            arr[i] += v;
            dp[i / len][arr[i]]++;
        }
    }
    else {
        for (int i = l, end = (c_l + 1) * len - 1; i <= end; ++i) {
            dp[i / len][arr[i]]--;
            arr[i] += v;
            dp[i / len][arr[i]]++;
        }
        for (int i = c_l + 1; i <= c_r - 1; ++i) {
            lazy[i] += v;
        }
        for (int i = c_r * len; i <= r; ++i) {
            dp[i / len][arr[i]]--;
            arr[i] += v;
            dp[i / len][arr[i]]++;
        }
    }


    //cout<<lazy[0]<<lazy[1]<<endl;
}
int query (int l, int r, int v)
{

    int ans = 0; l--; r--;
    if (v < 0 || v > 200000) return 0;

    int c_l = l / len,   c_r = r / len;
    if (c_l == c_r) {
        for (int i = l; i <= r; ++i) {
            if (arr[i] + lazy[i / len] == v) ans++;
        }
    }
    else {
        for (int i = l, end = (c_l + 1) * len - 1; i <= end; ++i) if (arr[i] + lazy[i / len] == v) ans++;

        for (int i = c_l + 1; i <= c_r - 1; ++i) ans += dp[i][v - lazy[i]];

        for (int i = c_r * len; i <= r; ++i) if (arr[i] + lazy[i / len] == v) ans++;

    }
    return ans;
}


int main()
{

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);



    int te = Int;
    for (int tes = 1; tes <= te; tes++) {
        memset(dp, 0, sizeof(dp));
        memset(lazy, 0, sizeof(lazy));

        n = Int, q = Int;



        For(n) arr[i] = Int;

        len =sqrt(n);

        //cout<<len<<endl;

        for (int i = 0; i < n; i++)
        {
            dp[i / len][arr[i]]++;
        }

        //cout<<dp[0][1]<<" "<<dp[0][2]<<endl;
        //cout<<dp[1][1]<<" "<<dp[1][2]<<"  "<<dp[1][5]<<endl;
        printf("Case %d:\n", tes );
        while (q--)
        {
            int a = Int, l = Int, r = Int, v = Int;

            if (a == 1)
            {
                update(l, r, v);

            }
            else
                printf("%d\n", query(l, r, v));
        }

    }


    return 0;
}


