#include<iostream>

using namespace std;

int main()
{
    int a[10]={1,2,2,3,4};
    int n, i, k;
    n=5;
    cout<<"The elements are:"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<"Enter the location:"<<endl;
    cin>>k;
    for(i=k-1;i<n;i++)
    {
        a[i]=a[i+1];
    }

    for(i=0;i<n;i++)
    {
        if(a[i]==NULL)
            break;
        else
        cout<<a[i]<<" ";
    }

    return 0;
}
