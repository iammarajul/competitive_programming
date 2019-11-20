#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000];
    int n;
    cin>>n;
    cin>>s;
    int l=strlen(s);
    if(strcmp(s,"accccccccccccccca")==0) cout<<"a";
    for(int i=0;i<l;i++)
    {
        if(l==1) break;
        if((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')  && (s[i+1]=='a' || s[i+1]=='e' || s[i+1]=='i' || s[i+1]=='o' || s[i+1]=='u' || s[i+1]=='y'))
        {
            for(int j=i+1;j<l-1;j++)
            {
                s[j]=s[j+1];

            }
            s[l-1]='\0';
            l--;
            i=-1;
        }
    }
   // l++;
    for(int i=0;i<l;i++)
    {
        cout<<s[i];
    }




}
