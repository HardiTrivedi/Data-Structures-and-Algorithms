#include <iostream>

using namespace std;

int * fun(int n)
{
    int *p;
    p=new int[n];
    for(int i=0;i<n;i++)
    {
        p[i]=i;
    }
    return p;
}
int main()
{
    int *arr;
    arr=fun(5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
