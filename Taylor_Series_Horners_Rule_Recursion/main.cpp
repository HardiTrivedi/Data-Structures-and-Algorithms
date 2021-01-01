#include <iostream>

using namespace std;

float e(int x,int n)
{
    static float s=1.0f;
    if(n==0)
    {
        return s;
    }
    else
    {
        s=(float)1+(x*s/n);
        return e(x,n-1);
    }
}
int main()
{
    cout<<e(2,3)<<endl;
    return 0;
}
