#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* head=NULL;



void enqueue(int x)
{
    node* temp;
    temp=new node();

    temp->data=x;


    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        node* temp2=head;
        while(temp2->next!=NULL)
        {
            temp2=temp2->next;
        }
        temp2->next=temp;

    }
}

void dequeue()
{
    if(head==NULL)
    {
        cout<<"Queue is Empty ... :( :( Cann't POP"<<endl;
    }
    else{
    head=head->next;
    }
}






void print()
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(7);
    enqueue(9);
    print();
    dequeue();
    print();
}




