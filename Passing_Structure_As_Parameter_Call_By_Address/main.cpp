#include <iostream>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};
void changeLength(rectangle *r1, int l)
{
    r1->length=15;
}
int main()
{
    rectangle r;
    r.length=10;
    r.breadth=5;
    changeLength(&r, 15);
    cout<<"New length is "<<r.length<<endl;
    return 0;
}
