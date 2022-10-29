#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(std::cin, s, static_cast<char>(EOF));
    cout<<s;
    return 0;
}