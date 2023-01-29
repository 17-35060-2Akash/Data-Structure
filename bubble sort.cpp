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
        for(i=0;i<n-pass;i++)
        {
            if(a[i]>a[i+1])
               {
                  SWAP(&a[i],&a[i+1]);
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
      cout<<a[i]<<" ";
    }
}

int main()
{
    int a[]={-1,3,2,-4,9};
    int n=5;
    bubblesort(a,n);
    array(a,n);

    return 0;
}



