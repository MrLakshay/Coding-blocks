#include <iostream>
#include <cstring>
using namespace std;
// BLUEPRINT
class Car
{
public:
    // name model price and seats are c/a data members.

    // Data Members
    char name[100]; // 100 byts
    int model;      // 4                 total 112 bytes so each object will take 112 bytes
    int price;      // 4
    int seats;      // 4

    // Functions
    void print()
    {

        cout << name << endl;
        cout << price << endl;
        cout << seats << endl;
        cout << model << endl
             << endl;
    }

    //       DEFAULT CONSTRUCTOR
    Car()
    {
        cout << "Inside constructor" << endl;
    }
};
int main()
{
    Car a, b; // a is an object of class car
    cout << sizeof(a) << endl;
    cout << sizeof(Car) << endl;
    strcpy(a.name, "Mercedes");
    a.price = 1999999;
    a.model = 3;
    a.seats = 5;
    strcpy(b.name, "Audi");
    b.price = 2321;
    b.model = 3;
    b.seats = 5;
    a.print();
    b.print();
    // cout << a.name << endl;
    // cout << a.price << endl;
    // cout << a.seats << endl;
    // cout << a.model << endl;
    // To access any data member of the class we use '.' operator
    //  example   a.model  a.name   a.price

    return 0;
}