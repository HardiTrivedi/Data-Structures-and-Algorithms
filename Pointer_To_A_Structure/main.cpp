#include <iostream>

using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    rectangle r;
    r.length=10;
    r.breadth=5;
    cout<<"Area of rectangle r "<<r.length*r.breadth<<endl;

    rectangle *p;
    p=&r;
    p->length=15;//changing length and breadth of r
    p->breadth=10;
    cout<<"Area of rectangle r after changing length and breadth "<<p->length*p->breadth<<endl;
    return 0;
}
