#include <iostream>

using namespace std;
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    rectangle *p;
    p=new rectangle;
    p->length=10;
    p->breadth=5;
    cout<<"Area of rectangle created in heap "<<p->length*p->breadth<<endl;

    return 0;
}
