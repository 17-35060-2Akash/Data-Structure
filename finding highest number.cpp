#include<iostream>

using namespace std;

int main()
{
    int i;
    int a[5]={1,2,3,4,5};
    int H,L,n=5;
    H=a[0];

    for(i=1;i<5;i++)
    {
        if (a[i]>H)
            H=a[i];
    }
    cout<<H<<endl;

    //lowest seems like:
    L=a[0];
    for(i=1;i<5;i++)
    {
        if (a[i]<L)
            L=a[i];
    }
    cout<<L<<endl;

    return 0;
}
