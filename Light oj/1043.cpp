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







int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int cas;
    scanf("%d", &cas);
    for (int kk = 1; kk <= cas; kk++) {

        double a, b, c, r;
        scanf("%lf%lf%lf%lf", &a, &b, &c, &r);
        double s = (a + b + c) / 2.;
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        double xx = (area * 2.) / c;
        double hi = a, lo = 0.;
        int cnt = 0; double mid;
        while (cnt <= 500)
        {
            mid = (lo + hi) / 2.;
            double pp = (xx * mid) / a;
            double bb = (b * mid) / a;
            double c1 = sqrt((mid * mid) - (pp * pp));
            double c2 = sqrt((bb * bb) - (pp * pp));
            double ar2 = (.5 * pp * c1) + (.5 * pp * c2);

            double rss = ar2 / (area - ar2);
            //cout<<fixed;
            //cout<<setprecision(7);
            //cout<<rss<<" "<<r<<" "<<abs(rss-r)<<endl;


            if (rss > r) hi = mid;
            else lo = mid;
            ++cnt;



        }
        printf("Case %d: %.7f\n", kk, mid );

    }
    return 0;
}