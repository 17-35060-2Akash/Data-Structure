#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head=NULL;
void insert(int data,int pos);
void print();
int main()
{
    int n,i,data,pos;
    cout<<"Enter the number of elements you want to insert:"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the data and position you want to insert:"<<endl;
        cin>>data;
        cout<<" & ";
        cin>>pos;
        insert(data,pos);
        print();
    }
    return 0;
}

void insert(int data,int pos)
{
    node *temp=new node();
    temp->data=data;
    temp->next=NULL;
    if(pos==1)
    {
        temp->next=head;
        head=temp;
    }
    else
    {
        node *temp1=head;
        for(int i=0;i<pos-2;i++)
        {
            temp1=temp1->next;
        }
        temp->next=temp1->next;
        temp1->next=temp;
    }
}

void print()
{
    node *temp=head;
    cout<<"The List is:"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data;
        cout<<" ";
        temp=temp->next;
    }
}
