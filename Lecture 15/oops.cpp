#include <iostream>
#include <cstring>
using namespace std;
// BLUEPRINT
class Car
{
public:
    // name model price and seats are c/a data members.

    // Data Members
    // char name[100]; // 100 byts
    char *name;
    int model; // 4                 total 112 bytes so each object will take 112 bytes
    int price; // 4
    int seats; // 4

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
        name = NULL;
    }
    //      PARAMETERISED CONSTRUCTOR
    Car(char *n, int p, int s, int m)
    {
        cout << "Inside parameterized constructor" << endl;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        // name = n;
        price = p;
        model = m;
        seats = s;
        print();
    }
    // Constructor can be overloaded

    //      COPY CONSTRUCTOR
    //      IT EXSISTS BY DEFAULT BUT CAN BE OVERRIDEN LIKE DEFAULT CONSTRUCTOR

    //      PASS COPY CONSTRUCTOR BY REFERENCE ONLY ELSE IT WILL RUN COPY CONST. INFINITLY
    //      BECAUSE IT WILL CREATE A COPY IN WILL PASSING THE PARAMETER
    Car(Car &X)
    {
        cout << "Inside copy constructorn\n";
        name = new char[strlen(X.name) + 1];
        strcpy(name, X.name);
        model = X.model;
        price = X.price;
        seats = X.seats;
    }
    //      !COPY CONSTRUCTOR

    //      COPY ASSIGNMENT OPERATOR
    void operator=(Car &X)
    {
        cout << "Inside copy assignment operator" << endl;
        setname(X.name);
        // name = new char[strlen(X.name) + 1];
        // strcpy(name, X.name);
        price = X.price;
        seats = X.seats;
        model = X.model;
    }
    //      !COPY ASSIGNMENT OPERATOR

    //      DESTRUCTOR

    ~Car()
    {
        cout << "Destroying" << name << endl;
    }
    //      !DESRTRUCTOR

    void setname(char *a)
    {
        if (name != NULL)
        {
            delete[] name;
        }
        name = new char[strlen(a) + 1];
        strcpy(name, a);
    }
    void operator+=(Car X)
    {
        char *oldname = name;
        name = new char[strlen(name) + strlen(X.name) + 1];
        strcpy(name, oldname);
        strcat(name, X.name);
        delete[] oldname;
        oldname = NULL;
    }
};
int main()
{
    Car a; // a is an object of class car
    cout << sizeof(a) << endl;
    cout << sizeof(Car) << endl;

    // a.name =new char[8];
    a.setname("Mercedes");
    // strcpy(a.name, "Mercedes");
    a.price = 1999999;
    a.model = 3;
    a.seats = 5;
    Car b("Audi", 232, 3, 5);
    // strcpy(b.name, "Audi");
    // b.price = 2321;
    // b.model = 3;
    // b.seats = 5;
    a += b;

    a.print();
    b.print();
    Car c = b;
    c.print();
    Car d(b);
    c = d;
    c.print();
    // Car d(); is invalid syntax

    // cout << a.name << endl;
    // cout << a.price << endl;
    // cout << a.seats << endl;
    // cout << a.model << endl;
    // To access any data member of the class we use '.' operator
    //  example   a.model  a.name   a.price

    Car *e = new Car;
    e = &a;
    delete e;

    return 0;
}