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
    int x,n,i;
    cout<<"Enter the number of elements you want to enter:"<<endl;
    cin>>n;
    cout<<"Enter the data:"<<endl;
    cin>>x;
    node *temp1=head;

    node *temp=new node();
    temp->data=x;
    temp->next=NULL;
    head=temp;

    for(i=0;i<n-1;i++)
    {
      node *temp=new node();
      temp->data=x;
      temp->next=NULL;
      head=temp;
      temp1=head;
      while(temp1->next!=NULL)
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
    cout<<"List is:"<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
