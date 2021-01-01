#include <iostream>

using namespace std;

int fib(int n) //finding (n+1)th term of the series
{
    int s0=0,s1=1,s;
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
        for(int i=2;i<=n;i++)
        {
            s=s0+s1; //add first two numbers to get the 3rd number
            s0=s1; //then to get the 4th number s0 has to become s1 and s1 has to become the sum obtained when first two number were added (which is s)
            s1=s;
        }
        return s;
    }
}
int main()
{
    cout<<fib(3)<<endl;
    return 0;
}
