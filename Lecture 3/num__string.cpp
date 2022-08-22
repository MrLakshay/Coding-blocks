#include <iostream>
using namespace std;
int main()
{
        int n;
        char a[100];
        cin >> n;

        // cin.get();

        cin.getline(a, 100);
        cout << n << endl;
        cout << a;
        return 0;
}

/*  GIVE FOLLOWING INPUT

10 HELLO WORLD
OUTPUT :
        10
         HELLO WORLD
        EXTRA SPACE BECAUSE DELIMITER OF CIN IS SPACE

10
HELLO WORLD
OUTPUT :
        10

        WILL NOT INPUT STRING BECAUSE GETLINE DEFAULT DELIMITER IS \n

TO RESOLVE THIS ADD:

cin.get()   IT WILL READ THE USELESS CHARACTER THOSE ARE SPACE AND NEXT LINE WHICH NEEDS TO BE IGNORED


*/