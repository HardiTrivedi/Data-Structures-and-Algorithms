#include <iostream>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};
void initialize(rectangle *r,int l,int b)
{
    r->length=l;
    r->breadth=b;
}
int area(rectangle r)
{
    return r.length*r.breadth;
}
void changeLenght(rectangle *r,int l)
{
    r->length=l;
}
int main()
{
    rectangle r;
    initialize(&r,10,5);
    cout<<"Length of rectangle is "<<r.length<<". "<<"Breadth of rectangle is "<<r.breadth<<endl;
    area(r);
    cout<<"Area of rectangle is "<<area(r)<<endl;
    changeLenght(&r,20);
    cout<<"Length of rectangle after changing length is "<<r.length<<endl;
    area(r);
    cout<<"Area of rectangle after changing length is "<<area(r)<<endl;
    return 0;
}
