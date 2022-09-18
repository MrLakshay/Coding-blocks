#include <iostream>
#include <cstring>
using namespace std;
// BLUEPRINT
class Car
{
private:
    int price;

public:
    // name model price and seats are c/a data members.

    // Data Members
    // char name[100]; // 100 byts
    char *name;
    int model; // 4                 total 112 bytes so each object will take 112 bytes
    // int price; // 4
    int seats; // 4
    static int count;
    const int tyres;
    // Functions
    void print()
    {

        cout << "name : " << name << endl;
        cout << "price : " << price << endl;
        cout << "seats : " << seats << endl;
        cout << "model : " << model << endl;
        cout << "tyres : " << tyres << endl
             << endl;
    }

    //       DEFAULT CONSTRUCTOR
    Car() : tyres(4)
    {
        count++;
        cout << "Inside constructor" << endl;
        name = NULL;
    }
    //      PARAMETERISED CONSTRUCTOR
    Car(char *n, int p, int s, int m) : tyres(4), price(p), model(m), seats(s)
    {
        count++;
        cout << "Inside parameterized constructor" << endl;
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        // name = n;
        // price = p;
        // model = m;
        // seats = s;
        print();
    }
    // Constructor can be overloaded

    //      COPY CONSTRUCTOR
    //      IT EXSISTS BY DEFAULT BUT CAN BE OVERRIDEN LIKE DEFAULT CONSTRUCTOR

    //      PASS COPY CONSTRUCTOR BY REFERENCE ONLY ELSE IT WILL RUN COPY CONST. INFINITLY
    //      BECAUSE IT WILL CREATE A COPY IN WILL PASSING THE PARAMETER
    Car(Car &X) : tyres(4)
    {
        count++;
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
        count--;
        cout << "Destroying " << name << endl;
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
    void operator+=(Car &X)
    {
        char *oldname = name;
        name = new char[strlen(name) + strlen(X.name) + 1];
        strcpy(name, oldname);
        strcat(name, X.name);
        delete[] oldname;
        oldname = NULL;
        price += X.price;
    }
    void updatePrice(int p)
    {
        if (p > 800 and p < 1000)
            price = p;
        else
            price = 900;
    }
    int getPrice()
    {
        return price;
    }
};

int Car::count = 0;

int main()
{
    Car a; // a is an object of class car
    cout << sizeof(a) << endl;
    cout << sizeof(Car) << endl;

    // a.name =new char[8];
    a.setname("Mercedes");
    // strcpy(a.name, "Mercedes");
    a.updatePrice(1999999);
    cout << a.getPrice() << endl;
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
    cout << Car::count << endl;
    Car *e = new Car;
    e = &a;
    cout << Car::count << endl;
    delete e;

    return 0;
}


// E BALAGURUSWAMI FOR OOPS
// OOPS DONE 