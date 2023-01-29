#include<iostream>
using namespace std;


int binarysearch(int a[],int k,int f, int l, int n)
{
    f=0;
    l=k-1;
    int mid;
    mid=(f+l)/2;
   while(f<=l)
   {
     if(a[mid]==n)
        cout<<"Found"<<endl;
     else if(n<a[mid])
        l=mid-1;
     else if(n>a[mid])
        f=mid+1;
   }
}

int main()
{
    int k=10;

    int a[k]={10,20,30,40,50,60,70,80,100,110};

    return 0;
}
