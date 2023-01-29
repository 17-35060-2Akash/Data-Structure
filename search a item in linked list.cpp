#include<iostream>
using namespace std;

struct node{

    int data;
    node *next;

};
node *head=NULL;
void print();

int main()
{
    int i,n,x;
    cout<<"Enter the no of data you want to give input:"<<endl;
    cin>>n;
    cout<<"Enter the data:"<<endl;
    cin>>x;

    node *temp=new node();
    temp->data=x;
    temp->next=NULL;
    head=temp;
    node *temp1=head;
    for(i=0;i<n-1;i++)
    {
        cout<<"Enter the data: ";
        cin>>x;
        node *temp=new node();
        temp->data=x;
        temp->next=NULL;
        while(temp->next!=NULL)
        {
            temp1=temp1->next;
        }
        temp1->next=temp;
        print();


    }


    return 0;
}

void print()
{
    node *temp=head;
    cout<<"The list is:"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data;
        cout<<" ";
    }
    temp=temp->next;
    int x;
    cout<<"Enter the node you want to find:"<<endl;
    cin>>x;
    while(temp!=NULL)
    {
    if(temp->data==x)
        cout<<"found"<<endl;

    else
        cout<<"Not found"<<endl;}
}


