#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head=NULL;

void insert(int data, int pos);
void print();

int main()
{
    int data, pos,i,n;
    cout<<"how many data you want to insert??:"<<endl;
    cin>>n;
    cout<<"Insert your data & position:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>data;
        cout<<" ";
        cin>>pos;
        insert(data,pos);
        print();
    }
    return 0;
}

void insert(int data, int pos)
{
    node *temp=new node();
    temp->data=data;

    if(pos=1)
    {
        temp->next=head;
        head=temp;
    }
    else{
        node *temp1=head;
        for(int i=0;i<pos-2;i++)
        {
            temp1=temp1->next;
            temp->next=temp1->next;
            temp1->next=temp;
        }
    }
}

void print()
{
    node *temp=head;
    cout<<"The List is:"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
}
