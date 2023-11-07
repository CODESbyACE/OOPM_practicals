#include<iostream>
using namespace std;

class add{
    public:
    int x,y,sum;
    add(){
        cout<<"Default constructor called\n";
        cout<<"Enter a number: ";cin>>x;
        cout<<"Enter another number: ";cin>>y;
        sum = x+y;
    }
    void disp(){
        cout << "Sum is: "<<sum <<endl;
    }
};

int main(){
    add obj1;
    obj1.disp();
    return 0;
}