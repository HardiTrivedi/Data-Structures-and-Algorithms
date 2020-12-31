#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a+b;
}
int main()
{
    int x=10,y=20,z;
    z=add(x,y);
    cout<<"Addition is "<<z<<endl;
    return 0;
}
