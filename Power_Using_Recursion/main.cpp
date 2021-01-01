#include <iostream>

using namespace std;

int power(int base, int expo)
{
    if(expo==0)
    {
        return 1;
    }
    else
    {
        base*=power(base,expo-1);
        return base;
    }
}
int main()
{
    cout<<"Power is "<<power(2,3)<<endl;
    return 0;
}
