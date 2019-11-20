#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;
    string s;
    cin>>s;
    int sum=0;
    vector<int>v;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='.') sum++;
        if(s[i]=='*'){
            v.push_back(sum);
            sum=0;
        }
    }

    for()



}
