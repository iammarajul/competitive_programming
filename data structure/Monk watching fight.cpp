#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* left;
    node* right;
};

node* root=NULL;

void insrt(int dat)
{
    node* temp=new node();
    node* temp2=root;
    temp->data=dat;
    if(root==NULL) root=temp;
    else
    {
        while(1)
        {
            if(dat<=temp2->data)
            {
                if(temp2->left==NULL)
                {
                    temp2->left=temp;
                    break;
                }
                temp2=temp2->left;

            }
            else
            {

                if(temp2->right==NULL)
                {

                    temp2->right=temp;
                    break ;
                }
                temp2=temp2->right;
            }
        }

    }
}

int maximam(int x,int y)
{
    if(x>=y)
        return x;
    else return y;
}



int height(node* temp)
{
    if(temp==NULL) return 0;
    int l,r;
    l=height(temp->left);
    r=height(temp->right);
    return maximam(l,r)+1;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int p;
        cin>>p;
        insrt(p);
    }

    cout<<height(root);

}
