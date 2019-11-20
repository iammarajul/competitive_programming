#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string dir[]={"A","B","C","AB","BC","AC","ABC"};
    int arr[8]={100000000,100000000,100000000,100000000,100000000,100000000,100000000,100000000};
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(),s.end());

        for(int i=0;i<7;i++)
        {
            if(s.compare(dir[i])==0) {
                if(arr[i]>n) arr[i]=n;
                break;
            }
        }

    }
    vector<int>vc;
    vc.push_back(arr[0]+arr[1]+arr[2]);
    vc.push_back(arr[0]+arr[4]);
    vc.push_back(arr[1]+arr[5]);
    vc.push_back(arr[2]+arr[3]);

    vc.push_back(arr[3]+arr[4]);
    vc.push_back(arr[4]+arr[5]);
    vc.push_back(arr[3]+arr[5]);
    vc.push_back(arr[6]);

    sort(vc.begin(),vc.end());
    if(vc[0]<100000000)
     cout<<vc[0]<<endl;
    else cout<<-1<<endl;


}
