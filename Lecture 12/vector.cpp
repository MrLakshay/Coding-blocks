#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<data type> name;
    vector<int> v;
    // v.push_back(element) to push element to the last of the vector
    // v.pop_back() to pop the last element of the vector

    // remaining working is just like array limit output etc

    // v.size() and v.capacity is total element that are be
    //  stored in the vector and can be stored respectively
    // if element are removed it won't reduce it size

    for (int i = 1; i <= 5; i++)
    {
        cout << "Inserting: " << i << " : ";
        v.push_back(i);
        cout << "Size is : " << v.size() << "and capacity is : " << v.capacity() << endl;
    }
    // Initialization of vector
    // 1st way
    // vector<int> v1({1, 2, 3, 4, 5});

    // 2nd way
    //  vector<int> v1={1, 2, 3, 4, 5};

    // 3rd way
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(int);
    vector<int> v1(a, a + n);
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    return 0;
}