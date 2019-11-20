#include<bits/stdc++.h>
using namespace std;

int pk[300002];
int arr[300002][60];
int vg[300007];
void Sp(int n)
{
    int l=n;
    int w=log2(n)+1;

    for(int i=0; i<n; i++) arr[i][0]=i;

    for(int j=1; j<w; j++)
    {
        int ln=pow(2,j);
        int ln2=pow(2,j-1);
        for(int i=0; i<n-ln+1; i++)
        {
            int l=arr[i][j-1];
            int r=arr[i+ln2][j-1];

            if(pk[l]<pk[r]) arr[i][j]=r;
            else arr[i][j]=l;

        }
    }

}

int sod(int nb)
{
    int sum=0;
    while(nb>0)
    {
        sum+=nb%10;
        nb/=10;
    }
    return sum;
}


int main()
{

    int test;
    scanf("%d",&test);

    for(int tes=1; tes<=test; tes++)
    {
        int q,nb;
        scanf("%d%d",&nb,&q);
        for(int i=0; i<nb; i++) {
            int x;
            scanf("%d",&x);
            pk[i]=sod(x);
            vg[i]=x;
        }

        Sp(nb);
        //print();

        printf("Case #%d:\n",tes);

        while(q--)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            int dis=b-a+1;
            int n=log2(dis);

            int kk=a-1+(dis-pow(2,n));
            int ans=min(pk[arr[a-1][n]],pk[arr[kk][n]]);
            if(ans==pk[arr[a-1][n]])  ans=arr[a-1][n];
            else ans=arr[kk][n];
            printf("%d %d\n",vg[ans],ans);
            //cout<<arr[a-1][n]<<" "<<arr[kk][n]<<endl;
        }

    }




}

