#include <iostream>

using namespace std;

int fact(int n1)
{
    if(n1==0)
    {
        return 1;
    }
    else
    {
        n1*=fact(n1-1);
        return n1;
    }
}
int C(int n, int r)
{
    int a=fact(n);
    int b=fact(r);
    int c=fact(n-r);
    return a/(b*c);
}
int main()
{
    cout<<C(3,2)<<endl;
    return 0;
}
