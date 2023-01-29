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
    cout<<"How many data you want to enter:"<<endl;
    cin>>n;
    cout<<"Input your data:"<<endl;
    cin>>x;
    node *temp1=head;

    for(i=0;i<n-1;i++)
    {
        cin>>x;
        node *temp=new node();
        temp->data=x;
        temp->next=NULL;
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
