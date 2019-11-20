
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



int NOD ( ll n ) {
    int res = 0;
    int sqrtn = sqrt ( n );

    for ( int i = 1; i <= sqrtn; i++ ) {
        if ( n % i == 0 ) 
        {
            int k=n/i;
            if(k==i) res++;
            else res+=2;
        }
    

    
   
    }

    return res;
}




int main()
{

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    int qq = Int;

    while (qq--) {

        int n = Int;

        int arr[n + 1];

        For(n) arr[i] = Int;

        sort(arr, arr + n);

        if (n % 2 == 0)
        {
            ll nn = (ll)arr[0] * (ll)arr[n - 1]; int p = 0;
            if(NOD(nn)-2!=n) 
            {
                cout<<-1<<endl;
                p=1;
                
            }//cout<<"  "<<NOD(nn)<<" "<<nn<<endl;
            for (int i = 0, j = n - 1; i < n / 2; i++, j--)
            {
                if ((ll)arr[i] * (ll)arr[j] != nn)
                {
                    if(p!=1) {cout << -1 << endl;
                    p = 1;
                    break;}    }
            }

            if (p == 0) cout << nn << endl;
        }

        else
        {
            ll nn = (ll)arr[n / 2] * (ll)arr[n / 2]; int p = 0;
            
            if(NOD(nn)-2!=n) 
            {
                cout<<-1<<endl;
                p=1;
            }
            for (int i = 0, j = n - 1; i <= n / 2 - 1; i++, j--)
            {
                if ((ll)arr[i] * (ll)arr[j] != nn)
                {
                    if(p!=1) {cout << -1 << endl;
                    p = 1;
                    break;}
                }
            }
            if (p == 0) cout << nn << endl;
        }

    }


    return 0;
}


