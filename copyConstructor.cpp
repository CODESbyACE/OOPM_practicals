#include<iostream>
using namespace std;

class complex{
    int r, i;
    public:
    complex(){
        cout<<"Default constructor called"<<endl;
        r=0;
        i=0;
    }
    complex(int x,int y){
        cout << "constructor called :"<<endl;
        r = x;
        i = y;
        cout << r << " " <<i<< endl;
    }
    complex( complex &s){
        cout << "Copy contructor is called"<< endl;
        i= s.r;
        r = s.i;

    }
    void display() {
        cout<< "Complex number is: "<< r << " + "<< i<<"i " <<endl;
    }
};


int main(){
    complex x, y, z(5,9);
    x.display();
    y.display();
    z.display();
    complex z1(z);
    z1.display();
    return 0;
}