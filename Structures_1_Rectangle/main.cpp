#include <iostream>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
    int area()
    {
        return length*breadth;
    }
};
int main()
{
    struct rectangle r; //initialization
    struct rectangle r1={10,5}; //initialization and declaration
    struct rectangle r2;
    r2.length=5;
    r2.breadth=3;
    cout<<"Area of r1 "<<r1.length*r1.breadth<<endl;
    cout<<"Area of r2 "<<r2.length*r2.breadth<<endl;
    cout<<"Area of r1 using area function "<<r1.area()<<endl;
    return 0;
}
