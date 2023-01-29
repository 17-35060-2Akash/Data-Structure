#include<iostream>

using namespace std;

void SWAP(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void bubblesort( int a[],int n)
{
    int pass, i, flag;
    for(pass=1;pass<n;pass++)

    { flag =0;
        for(i=1;i<=n-pass;i++)
        {
            if(a[i]<a[i-1])
               {
                  SWAP(&a[i-1],&a[i]);
                  flag=1;
               }

        }if(flag==0)
    break;

    }

    }


void array(int a[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
      cout<<a[i]<<endl;
    }
}

int main()
{
    int a[]={1,5,2,3,4};
    int n=5;
    bubblesort(a,n);
    array(a,n);

    return 0;
}



