#include<iostream>
#include<stack>
#include<conio.h>
using namespace std;

int top=-1,  size=10,x[100];
int push(int value)
{if(top>=size-1)
cout<<"stack is full"<<endl;
    else
        top++; x[top]=value;}
int peek()
{
    if (top<0) cout<<"The stack is empty"<<endl;
    else
      cout<<x[top]<<endl;
}
int pop()
{
    if (top<0)
cout<<"The stack is empty"<<endl;
    else
        top--;
}
int main()
    push(11);

    push(12); push(13); push(14); push(15);

    for(int i=top;i>=0;i--)
    {cout<<x[i]<<endl;}

cout<<top+1<<endl;
    return 0;
}
