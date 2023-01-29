#include<iostream>

using namespace std;

int main()
{
    int a[10];
    int n,i;
    n=5;
    cout<<"Enter Five numbers:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    a[4]=NULL;
    for(i=0;i<n;i++)
    {
        if(a[i]==NULL)
            break;
        else
        cout<<a[i]<<" ";
    }

    return 0;

}
