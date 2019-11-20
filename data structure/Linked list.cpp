#include<bits/stdc++.h>
using namespace std;

//list < int > abc;



struct node
{
    int data;
    node* next;
};

node* head=NULL;

void add(int x)
{
    node* temp;
    temp=new node();

    if(head==NULL)
    {

        temp->data=x;
        head=temp;
        temp->next=NULL;
    }
    else
    {
        node* temp2;
        node* temp3;
        temp2=head;
        temp3=new node();
        temp3->data=x;
        temp3->next=NULL;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }


        temp2->next=temp3;

    }

}

void insert(int pos,int d)
{
    node* temp=head;
    int cnt=1;
    node* mom;
    mom=new node();
    mom->data=d;

    while(temp!=NULL)
    {
        if(cnt==pos)
            break;
        temp=temp->next;
        cnt++;
    }
    mom->next=temp->next;
    temp->next=mom;


}


void print()
{
    node* temp;
    temp=head;

    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}

void delet(int pos)
{
    node *temp=head;

    if(pos==1)
    {
        node* temp3=head;
        head=head->next;
        delete(temp3);
    }
    else{
    int cnt=1;
    while(temp!=NULL)
    {
        if(cnt+1==pos) break;
        temp=temp->next;
        cnt++;
    }
    //cout<<cnt<<endl;
    node* temp2=temp->next;
    temp->next=temp2->next;
    }
}



int main()
{
    add(1);
    add(2);
    add(3);
    add(4);
    add(9);
    insert(5,100);
    delet(2);

    print();
}
