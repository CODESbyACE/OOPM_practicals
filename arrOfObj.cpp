#include<iostream>
#include <ios>
#include <limits>
using namespace std;

class Supermarket{
    private:
    char name[60];
    float price;
    char category[20];
    public:
    void getData(){
        cout<<"Enter the Name of Product : ";
        
        cin.getline(name,60);
        cout<<"Enter Price of Product : ";
        cin>>price;
        cout<<"Enter Category (Fruits/Vegetables/Dairy) : ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin.getline(category,20);
        cout<< "\n";
    }
    void show_data(){
        cout << "Name: "<< name << endl
             << "Category: "<< category <<endl
             << "Price: "<< price << endl;
        cout<< "\n";
    }
};

int main(){
    Supermarket s[6];

    for (int i = 0; i < 6; i++)
    {
        cout<<i+1<<")";
        s[i].getData();
    }

    for (int i = 0; i < 6; i++)
    {
        cout<<i+1<<")";
        s[i].show_data();
    }

    return 0;
}