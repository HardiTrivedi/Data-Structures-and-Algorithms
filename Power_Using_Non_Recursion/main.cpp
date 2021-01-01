#include <iostream>

using namespace std;

int power(int base, int expo)
{
    int product=1;
    for(int i=expo;i>0;i--)
    {
        product*=base;
    }
    return product;
}
int main()
{
    cout<<"Power is "<<power(2,3)<<endl;
    return 0;
}
