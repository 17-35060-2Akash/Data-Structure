#include<bits/stdc++.h>

using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int a[]={1,4,2,5,3};
    int minvalue,minindex,i,n=5;
    for(int select=0;select<n-1;select++)
    {
        minindex=select;
        minvalue=a[select];
        {
            for(i=select+1;i<n;i++)
            {
                if(a[i]<minvalue)
                minvalue=a[i];
                minindex=i;
            }

        }
        a[minindex] = a[select];
        a[select] = minvalue;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
