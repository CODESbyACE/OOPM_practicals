#include<iostream>
using namespace std;

class add{
    public:
    int x,y;
    add(int a, int b){
        x = a;
        y = b;
    }
    void disp(){
        cout << "Sum of numbers is: "<<x+y<<endl;
    }
};

int main(){
    add a1(5,6), a2(45,23);
    a1.disp();
    a2.disp();
    return 0;
}