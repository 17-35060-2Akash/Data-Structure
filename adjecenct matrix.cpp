#include<iostream>
using namespace std;

int ad[100][100];

int main()
{
    int node, edge;
    cout<<"Enter the Number of nodes:"<<endl;
    cin>>node;
    cout<<"Enter the number of edges:"<<endl;
    cin>>edge;
    int n1,n2;
    for(int i=0;i<edge;i++)
    {
        cout<<"Enter the adjacent nodes: "<<endl;

        cin>>n1;

        cin>>n2;
        cout<<endl;
        ad[n1][n2]=1;
        ad[n2][n1]=1;
    }

     for(int i=0;i<node;i++)
     {
         for(int j=0;j<node;j++)
         {
             cout<<ad[i][j]<<" ";
         }
         cout<<endl;
     }
    return 0;
}
