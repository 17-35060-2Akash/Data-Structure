#include<iostream>
using namespace std;

void print();
struct node
{
    int data;
    node *next;
    node *prev;
};

node *head=NULL;
node *tail=NULL;

int main()
{
    int n,x,i;
    cout<<"Enter the number of nodes you want to enter:"<<endl;
    cin>>n;

    for(i=0;i<n;i++)
    { cout<<"Enter the data:"<<endl;
      cin>>x;
        if(head==NULL)
        {
            node *temp=new node();
            temp->data=x;
            temp->prev=NULL;
            temp->next=NULL;
            head=temp;
            tail=temp;


        }
        else
        {
            node *temp1=head;
            while(temp1->next!=NULL)
            {
                temp1=temp1->next;
            }
            node *temp=new node();
            temp->data=x;

            temp->next=NULL;
            tail=temp;
            temp1->next=temp;
            temp1=temp;

        }
        print();
    }
    return 0;
}

void print()
{
    node *temp=head;
    cout<<"The list is:";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
