#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    char s1[2004][20];
    char s2[2004][20];
    cin>>n>>m;
    for(int i=0; i<n+m; i++)
        cin>>s1[i]>>s2[i];

    //for(int i=0; i<n+m; i++)
    //cout<<s1[i]<<" "<<s2[i]<<endl;


    char xxx[20];
    int l;
    for(int i=n; i<m+n; i++)
    {
        l=strlen(s2[i]);

        for(int j=0; j<n; j++)
        {
            for(int k=0; k<l-1; k++)
                xxx[k]=s2[i][k];
                xxx[l-1]='\0';
            //cout<<xxx;
            if(strcmp(xxx,s2[j])==0)
            {
                cout<<s1[i]<<" "<<s2[i]<<" #"<<s1[j]<<endl;
                break;

            }

        }
    }
}
