#include <iostream>

using namespace std;

void fun(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int A[5]={1,2,3,4,5};
    fun(A,5);
    return 0;
}
