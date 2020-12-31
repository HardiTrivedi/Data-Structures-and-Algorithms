#include <iostream>

using namespace std;

void Swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x=10,y=20;
    Swap(x,y);
    //call by value does not change the actual parameters
    cout<<"x is "<<x<<endl;
    cout<<"y is "<<y<<endl;
    return 0;
}
