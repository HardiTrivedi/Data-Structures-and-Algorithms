#include <iostream>

using namespace std;

int main()
{
    int a=10;
    int &b=a;
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;
    a++;
    cout<<"a after incrementing a once "<<a<<endl;
    cout<<"b after incrementing a once "<<b<<endl;
    b=25;
    cout<<"Assigning b to another value "<<b<<endl;
    cout<<"a after assigning b to another value "<<a<<endl;
    return 0;
}
