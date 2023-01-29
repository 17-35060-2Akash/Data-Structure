#include<iostream>

using namespace std;

struct student{

    string name;
    int id;
    double marks;
    int age;


};

int main()
{
    int i;
    struct student A[10];
    cout<<"Enter The name,id,marks and age of the studnt"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>A[i].name;
        cout<<endl;
        cin>>A[i].id;
        cout<<endl;
        cin>>A[i].marks;
        cout<<endl;
        cin>>A[i].age;
        cout<<endl;
    }


    return 0;
}
