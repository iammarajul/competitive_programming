#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int>vc;
    stack <char> st;
    int cnt=0;
    for(int i=0; i<s.size(); i++)
    {
        if( s[i]=='(')
            st.push(s[i]);
        else if(s[i]==')')
        {
            bool to=st.empty();
            //cout<<to<<endl;
            if(to==0)
            {
                char top=st.top();
                if(top=='(')
                {
                    cnt+=2;
                    st.pop();
                }
                else
                {
                    vc.push_back(cnt);
                    cnt=0;

                }
            }

        }
        if(st.empty())
        {
            vc.push_back(cnt);
                    cnt=0;
        }
    }

    for(int i=0; i<vc.size(); i++) cout<<vc[i]<<" ";

}
