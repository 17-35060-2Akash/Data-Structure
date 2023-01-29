#include<iostream>

using namespace std;
//have to insert a number in Kth location :)
int main()
{
    int a[10];
    int n=6,i,k,b;
    cout<<"Insert 6 numbers:"<<endl;
   for(i=0;i<n;i++)
   {
       cin>>a[i];
   }
   cout<<"Enter the position you want to insert the data:"<<endl;
   cin>>k;

   for(i=n-1;i>=k-1;i--)
   {
      a[i+1]=a[i];
   }
   cout<<"insert the data which you want to add to the position:"<<endl;
   cin>>b;
   a[k-1]=b;
   cout<<"The new array is:"<<endl;
   for(i=0;i<n+1;i++)
   {
       cout<<a[i]<<" ";
   }





    return 0;
}


