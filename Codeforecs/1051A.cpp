#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt1=0,cnt2=0,cnt3=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='a' && s[i]<='z') cnt1++;
            else if(s[i]>='A' && s[i]<='Z') cnt2++;
            else cnt3++;
        }

        if(cnt1>0 && cnt2>0 && cnt3>0) cout<<s<<endl;
        else if(cnt1>0 && cnt2>0 && cnt3==0)
        {
            if(cnt1>cnt2) for(int i=0; i<s.size(); i++)
                {
                    if(s[i]>='a' && s[i]<='z')
                    {
                        s[i]='1';
                        break;
                    }
                }
            else
            {
                for(int i=0; i<s.size(); i++)
                {
                    if(s[i]>='A' && s[i]<='Z')
                    {
                        s[i]='1';
                        break;
                    }
                }


            }
            cout<<s<<endl;
        }
        else if(cnt1==0 && cnt2>0 && cnt3>0)
        {
            if(cnt2>cnt3) for(int i=0; i<s.size(); i++)
                {
                    if(s[i]>='A' && s[i]<='Z')
                    {
                        s[i]='a';
                        break;
                    }
                }
            else
            {
                for(int i=0; i<s.size(); i++)
                {
                    if(s[i]>='0' && s[i]<='9')
                    {
                        s[i]='a';
                        break;
                    }
                }


            }
            cout<<s<<endl;
        }
        else if(cnt1>0 && cnt2==0 && cnt3>0)
        {
            if(cnt1>cnt3) for(int i=0; i<s.size(); i++)
                {
                    if(s[i]>='a' && s[i]<='z')
                    {
                        s[i]='A';
                        break;
                    }
                }
            else
            {
                for(int i=0; i<s.size(); i++)
                {
                    if(s[i]>='0' && s[i]<='9')
                    {
                        s[i]='A';
                        break;
                    }
                }

            }
            cout<<s<<endl;
        }
        else if(cnt1==0 && cnt2==0 && cnt3>0)
        {
            s[0]='a';
            s[1]='B';
            cout<<s<<endl;
        }
        else if(cnt1==0 && cnt2>0 && cnt3==0)
        {
            s[0]='a';
            s[1]='1';
            cout<<s<<endl;
        }
        else if(cnt1>0 && cnt2==0 && cnt3==0)
        {
            s[0]='1';
            s[1]='B';
            cout<<s<<endl;
        }

    }
}
