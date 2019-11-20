#include<bits/stdc++.h>
using namespace std;

map< string,bool> mp;

int main()
{
    mp["ABSINTH"]=1;
    mp["BEER"]=1;
    mp["BRANDY"]=1;
    mp["CHAMPAGNE"]=1;
    mp["GIN"]=1;
    mp["RUM"]=1;
    mp["SAKE"]=1;
    mp["TEQUILA"]=1;
    mp["VODKA"]=1;
    mp["WHISKEY"]=1;
    mp["WINE"]=1;
    int n;
    cin>>n;
    int num=n;
    int cnt=0;
    while(n--)
    {
        string s;
        cin>>s;

        if(s[0]>='A' && s[0]<='Z')
        {
            if(mp[s]==1)
                cnt++;
        }
        else {
            if(s.size()==1) {cnt++;}
            else if(s.size()==2 && s[0]=='1' && s[1]<'8') cnt++;
        }
    }
    cout<<cnt<<endl;
}
