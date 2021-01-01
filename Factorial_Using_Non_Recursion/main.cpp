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
        for(int i=n-1;i>0;i--)
        {
            n*=i;
        }
        return n;
    }
}
int main()
{
    cout<<"Factorial is "<<fact(3)<<endl;
    return 0;
}
