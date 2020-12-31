#include <iostream>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};
int area(rectangle r1)
{
    return r1.length*r1.breadth;
}
int main()
{
    rectangle r;
    r.length=10;
    r.breadth=5;
    cout<<"Area of r is "<<area(r)<<endl;
    return 0;
}
