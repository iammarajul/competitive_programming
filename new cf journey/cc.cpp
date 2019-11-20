 #include<bits/stdc++.h>

using namespace std;
/**
******************************************************************
***************** Author:Bisnu sarkar **************************
******************************************************************
**/

#define ull            unsigned long long
#define ll             long long
#define vi             vector<int>
#define pb             push_back
#define mp             make_pair
#define pii            pair<int,int>
#define vit            vector<int> :: iterator
#define sit            set<int> :: iterator
#define vrit           vector<int> :: reverse iterator
#define ff             first
#define ss             second

#define what_is(x)     cerr << #x << " is " << x << endl;

///*....Debugger....*/

#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }
void err(istream_iterator<string> it)
{
    cout << endl ;
}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cerr << *it << " = " << a << ' ' ;
    err(++it, args...);
}

int dx[8]= {1,0,-1,0,-1,-1,1,1};
int dy[8]= {0,1,0,-1,-1,1,-1,1};
int ini()
{
    int x;
    scanf("%d",&x);
    return x;
}
long long inl()
{
    long long x;
    scanf("%lld",&x);
    return x;
}

const int N = (int) 1e5 + 5;
const int inf = (int) 1e9 + 7;
const double pi=acos(-1.0);

int main()
{
     int t,te=0;
    t=ini();
    while(t--)
    {
      double r;
      cin>>r;
      double ang=(90.0*pi)/180.0;
      double semi1=(r*r*(ang-sin(ang)))/4.0;
      double a=r/sqrt(2.0);
      double s=(a+a+r)/2.0;
      double triangle=sqrt(s*(s-a)*(s-a)*(s-r));

      double semi2=(pi*r*r)/8.0;

      double res=semi2 - (semi1-triangle);
      printf("Case %d: %.4f\n",++te,res/2.0);
    }
    return 0;
}