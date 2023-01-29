#include<iostream>

using namespace std;

int main()
{
  int a[10] ,i;
  int n=5;


	for(i=0;i<n;i++)
    {
      cin>>a[i];
    }
    a[n]=7;

    for(i=0;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }


    return 0;
}


