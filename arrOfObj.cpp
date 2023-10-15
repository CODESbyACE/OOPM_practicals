#include<iostream>
using namespace std;

class Supermarket{
    private:
    char name[60];
    int price;
    char category[20];
    public:
    void getData(){
        cout<<"Enter the Name of Product : ";
        cin>>name;
        cout<<"Enter Price of Product : ";
        cin>>price;
        cout<<"Enter Category (Fruits/Vegetables/Dairy) : ";
        cin>>category;
    }
    void show_data(){
        cout << "Name: "<< name << endl
             << "Category: "<< category <<endl
             << "Price: "<< price << endl;
    }
};

int main(){
    Supermarket s[6];

    for (int i = 0; i < 6; i++)
    {
        s[i].getData();
    }

    for (int i = 0; i < 6; i++)
    {
        s[i].show_data();
    }

    return 0;
}