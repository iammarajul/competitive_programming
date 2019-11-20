#include<bits/stdc++.h>
using namespace std;

bool cheak(int arr[][50],int n)
{
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)

            if(arr[i][j]!=1) return true;



    return false;
}


int main()
{
    int n;
    int arr[51][51];
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    if(cheak(arr[n][],n)==false) cout<<"

}
