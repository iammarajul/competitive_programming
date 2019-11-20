
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




int arr[12][12];
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, -0, 0};
int pk1, pk2;
int vis[12][12];
map<pair<int , int> , pair<int, int >>mp;
void bfs(int x, int y)
{
	memset(vis, 0, sizeof(vis));
	mp.erase(mp.begin(),mp.end());

	vis[x][y] = 1;
	queue < pair<int, int>> qu;
	qu.push({x, y});
	while (!qu.empty())
	{
		int xx = qu.front().first;
		int yy = qu.front().second;
		//cout<<xx<<" "<<yy<<endl;
		qu.pop();

		for (int i = 0; i <= 3; i++)
		{
			int xe = xx + dx[i];
			int ye = yy + dy[i];
			//cout<<xe<<" ?"<<ye<<endl;
			if (xe >= 0 && xe < 12 && ye >= 0 && ye < 12)
			{
				if (arr[xe][ye] == 2) {mp[ {xe, ye}] = {xx, yy}; pk1 = xe; pk2 = ye;return;}
				else if (arr[xe][ye] == 0 && !vis[xe][ye]) {qu.push({xe, ye});  vis[xe][ye] = 1;mp[ {xe, ye}] = {xx, yy};}
			}
		}

	}

}


int main()
{

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	int t = Int;

	while (t--)
	{
	memset(arr, 0, sizeof(arr));
		arr[2][2] = 2;
		arr[2][9] = 2;
		arr[9][2] = 2;
		arr[9][9] = 2;
		arr[5][5] = 3;
		arr[5][6] = 3;
		arr[6][5] = 3;
		arr[6][6] = 3;
		arr[8][1] = 3;
		arr[8][2] = 3;
		arr[9][1] = 3;
		arr[8][9] = 3;
		arr[8][10] = 3;
		arr[9][10] = 3;

		int ax, by;
		cin >> ax >> by;
		bfs(--ax, --by);
		//cout<<"twe"<<endl;10
		mp[{ax,by}]={-10,-10};
		//cout<<pk1<<" "<<pk2<<endl;
		string s;
		while(1)
		{
			int xe=mp[{pk1,pk2}].first;
			int ye=mp[{pk1,pk2}].second;
			//cout<<xe<<" "<<ye<<endl;
			if(xe-pk1==-1) s.pb('D');
			else if(xe-pk1==1) s.pb('U');
			else if(ye-pk2==-1) s.pb('R');
			else if(ye-pk2==1) s.pb('L');
			if(xe==-10 && ye==-10) break;
			pk1=xe;
			pk2=ye;
		}

		reverse(s.begin(), s.end());
		cout<<s.size()<<endl;
		cout<<s<<endl;




	}


	return 0;
}


