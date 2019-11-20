#include<bits/stdc++.h>
using namespace std;
int arr1[300],arr2[300];
vector<int >arr;
int main()
{
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    for(int i=0; i<n; i++)
    {
        arr1[(int)s1[i]]++;
        arr2[(int)s2[i]]++;
    }
    for(int i=97; i<=122; i++)
    {
        if(arr1[i]!=arr2[i])
        {
            cout<<-1;
            return 0;
        }
    }
    for(int i=0; i<n; i++)
    {
        char c=s2[i];
        if(s2[i]!=s1[i])
        {
            int j;
            for( j=i+1; j<n; j++)
            {
                if(s1[j]==c)
                {
                    for(int k=j; k>i; k--)
                    {
                        arr.push_back(k);
                    }
                    for(int k=j-1; k>=i; k--)
                    {
                        s1[k+1]=s1[k];
                    }
                    s1[i]=c;
                    //cout<<s1<<endl;

                }
            }
        }
    }

    cout<<arr.size()<<endl;
    for(int i=0; i<arr.size(); i++)
        cout<<arr[i]<<" ";


}
