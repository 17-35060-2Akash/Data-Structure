#include<iostream>
using namespace std;

int main()
{
    int a[10]={1,2,4,5,6};
    int n=5,k,i;
    cout<<"The array is:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"Ente the position you want to assign the element:"<<endl;
    cin>>k;
    for(i=n-1;i>=k-1;i--)
    {
        a[i+1]=a[i];
    }
    a[k-1]=3;
    for(i=0;i<n+1;i++)
    {
       cout<<a[i]<<" ";
    }



    return 0;
}
