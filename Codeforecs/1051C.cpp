#include<bits/stdc++.h>
using namespace std;


int occ[101];
int used[101];


int main()
{
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        occ[arr[i]]++;
    }
    int cnt1=0,cnt2=0;
    for(int i=1;i<=100;i++)
    {
        if(occ[i]==1) cnt1++;
        else if(occ[i]!=2 && occ[i]!=0) cnt2++;
       // else cnt2++;
    }
    if((cnt1%2!=0 && cnt2==0) ||(cnt2==0 && cnt2%2!=0)) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        if (cnt1%2==0)
        {
            int nn=cnt1/2;
            int pk=0;
            for (int i = 0; i < n; ++i)
            {
               if(occ[arr[i]]==1) {
                    if(pk<nn) cout<<"A",pk++;
                    else cout<<"B",pk++;
               }
               else cout<<"B"; 
            }
        }
        else{
            int nn=cnt1/2;
            int pk=0,sk=0;
            for (int i = 0; i < n; ++i)
            {
               if(occ[arr[i]]==1) {
                    if(pk<nn) cout<<"A",pk++;
                    else cout<<"B",pk++;
               }
               else 
               {
                    if(sk==0 && occ[arr[i]]!=2) cout<<"A",sk=1;
                    else cout<<"B";
               }
            }
        }
    }
        
    
}
