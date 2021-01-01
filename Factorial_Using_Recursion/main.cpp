#include <iostream>

using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        n*=fact(n-1);
        return n;
    }
}
int main()
{
    cout<<"Factorial is "<<fact(3)<<endl;
    return 0;
}
