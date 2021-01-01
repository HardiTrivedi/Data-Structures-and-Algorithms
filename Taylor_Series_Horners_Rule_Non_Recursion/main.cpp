#include <iostream>

using namespace std;

float e(int x, int n)
{
    float s=1.0f;
    for(float i=n;i>0;i--)
    {
        s=1+((x/i)*s);
    }
    return s;
}
int main()
{
    cout<<e(2,3)<<endl;
    return 0;
}
