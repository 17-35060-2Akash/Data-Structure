#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char str[25]; int i;
    cout<<"Enter the string"<<endl;
    for( i=0;i<11;i++)
    {
        cin>>str[i];
    }

    i=0;
    while(str[i]!=NULL)
       {
          i++;
       }
    cout<<"The length is: "<<i<<endl;




    return 0;
}
