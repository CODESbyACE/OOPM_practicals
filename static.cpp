#include<iostream>
#include <ios>
#include <limits>
using namespace std;

class Student{
    int rollNo;
    int marks;
    char name[100];
    public:
    static int objCount;
    Student(){
        objCount++;
    }
    void getData(){
        cout<<"Enter Roll No : "; cin>>rollNo;
        cout<<"Enter Marks : "; cin>>marks;
        cout<<"Enter Name : ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.getline(name,100);        
    }
    void displayData(){
        cout<<endl<<"Name : "<<name<<endl;
        cout<<"Roll No : "<<rollNo<<endl;
        cout<<"Marks : "<<marks<<endl;
    }
};
int Student :: objCount = 0;
int main(){
    Student s1;
    s1.getData();
    s1.displayData();

    Student s2;
    s2.getData();
    s2.displayData();

    Student s3;
    s3.getData();
    s3.displayData();

    cout<<"Total number of students = "<< Student :: objCount<<endl;
    return 0;
}