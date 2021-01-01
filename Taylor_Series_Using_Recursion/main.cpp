#include <iostream>

using namespace std;

float e(int x, int n)
{
    static float p=1.0f,f=1.0f;
    float s;
    if(n==0)
    {
        return 1;
    }
    else
    {
        s=e(x,n-1);
        p*=x;
        f*=n;
        s+=(p/f);
        return s;
    }
}
int main()
{
    cout<<e(2,3)<<endl;
    return 0;
}
