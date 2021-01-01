#include <iostream>

using namespace std;

int fib(int n) //finding (n+1)th term of the series
{
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-2)+fib(n-1);
    }
}
int main()
{
    cout<<fib(3)<<endl;
    return 0;
}
