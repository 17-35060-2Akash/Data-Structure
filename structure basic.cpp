#include<iostream>
#include<cstdio>
using namespace std;


int main()
{
    struct{
    int rollno;
    char name[35];
    int marks;
    }stud;

    stud.rollno=010;
    cout<<"Enter the name & marks:"<<endl;
    cin>>stud.name;
    gets(stud.marks);

    cout<<stud.rollno<<" "<<stud.name<<" "<<stud.marks<<endl;

    return 0;
}
