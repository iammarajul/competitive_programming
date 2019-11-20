#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    stack<char>st;

    cin>>s;
    int ans=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='('){
            st.push(s[i]);
        }
        else
        {

            if(st.size()!=0)
            {
                if(st.top()=='(') {ans+=2,st.pop();}
            }
        }
    }
    cout<<ans<<endl;
}
