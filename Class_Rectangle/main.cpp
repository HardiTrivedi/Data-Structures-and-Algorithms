#include <iostream>

using namespace std;

class rectangle
{
private:

    int length;
    int breadth;

public:

    rectangle(int l=0, int b=0) //default arguments
    {
        setLength(l);
        setBreadth(b);
    }
    rectangle(rectangle &rect)
    {
        length=rect.length;
        breadth=rect.breadth;
    }
    void setLength(int l)
    {
        if(l>=0)
        {
            length=l;
        }
        else
        {
            cout<<"Length given was negative and as a result default value of length was taken into account "<<endl;
            length=0;
        }
    }
    void setBreadth(int b)
    {
        if(b>=0)
        {
            breadth=b;
        }
        else
        {
            cout<<"Breadth given was negative and as a result default value of breadth was taken into account "<<endl;
            breadth=0;
        }
    }
    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }

};
int main()
{
    rectangle r;
    cout<<"Area of the rectangle r is "<<r.area()<<endl;
    rectangle r1(10,5);
    cout<<"Area of the rectangle r1 is "<<r1.area()<<endl;
    rectangle rect(3,4);
    rectangle r2(rect);
    cout<<"Area of the rectangle r2 is "<<r2.area()<<endl;
    return 0;
}
