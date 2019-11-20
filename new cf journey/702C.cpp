
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








int main()
{

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int n = Int, m = Int;

    int arr[n + 1];
    std::vector<int> arr2;
    std::map<int, int> mp;

    For(n)
    {
        arr[i] = Int;
    }
    For(m)
    {
        int x=Int;
        if(!mp[x])
        {
            arr2.pb(x);
            mp[x]=1;
        }
    }
    m=mp.size();

    //sort(arr, arr + n);
    //sort(arr2, arr2 + m);

    int p1 = 0, p2 = 0;
    int r = 0;

    while (p1 < n)
    {
        if (p2 == m - 1) {r = max(r, abs(arr[p1] - arr2[p2])); p1++;}
        else
        {
            if (arr[p1] <= arr2[p2]) {
                r = max(r, arr2[p2] - arr[p1]); p1++;
            }
            else
            {
                int ss = r;
                int diff = abs(arr[p1] - arr2[p2]);
                int tp = p2;
                int cnt = 0;
                while (1)
                {
                    if ((abs(arr[p1] - arr2[tp + 1])) < diff) {tp++; diff = abs(arr[p1] - arr2[tp]);}
                    else break;
                    if (tp == m - 1) break;
                    cnt++;
                }
                p2 = tp;

                r = max(r, abs(arr[p1] - arr2[p2])); p1++;
                //cout<<cnt<<"dkcjc"<<endl;

            }
            //cout << p2 << " " << p1 << " " << r << endl;
        }
    }

    cout << r << endl;





    return 0;
}


