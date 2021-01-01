#include <iostream>

using namespace std;

int C(int n, int r)
{
    if(n==0||r==0||n==r)
    {
        return 1;
    }
    else if(r==1)
    {
        return n;
    }
    else
    {
        return C(n-1,r-1)+C(n-1,r);
    }
}
int main()
{
    cout<<C(3,2)<<endl;
    return 0;
}
