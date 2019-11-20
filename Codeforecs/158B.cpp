#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,cnt4=0,cnt3=0,cnt2=0,cnt=0,mm;
    cin>>n;
    //int arr[n+1];

    for(int i=0;i<n;i++)
    {
        cin>>mm;
        if(mm==4) cnt4++;
        else if(mm==3) cnt3++;
        else if(mm==2) cnt2++;
        else cnt++;
    }
    int p1;
    int sum=cnt4;
    sum+=cnt2/2;
    int p2=cnt2%2;
    if(cnt3<=cnt)
    {
        sum+=cnt3;
        p1=cnt-cnt3;
    }
    else
    {
        sum+=cnt3;
        p1=0;
    }
    sum+=p1/4;
    p1=p1%4;
    if(p2!=0 && p1<=2) {sum++;}
    else if(p2!=0 && p1==3) {sum++;sum++;}
   // else if (p2==0 && p1!=0) sum++;
    //sum++;
    cout<<sum;
    return 0;





}
