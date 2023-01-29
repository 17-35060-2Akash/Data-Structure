#include<iostream>
using namespace std;

void print();
struct node
{
    int data;
    node *next;
};

node *head=NULL;

int main()
{
    int  x,n,i;
    cout<<"How many numbers you want to add:"<<endl;
    cin>>n;
    cout<<"Enter Your Number:"<<endl;
    cin>>x;
    node *temp=new node();
    temp->data=x;
    temp->next=NULL;

    head =temp;
    for(i=0;i<n-1;i++)
    {
        cin>>x;
        node *temp=new node();
        temp->data=x;
        temp->next=NULL;

        temp->next=head;
        head=temp;
        print();
    }
    return 0;
}

void print()
{
    node *temp=head;
    cout<<"List is:"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
