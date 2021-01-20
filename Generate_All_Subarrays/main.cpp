#include <iostream>

using namespace std;

void subarrays(int A[], int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<A[k]<<",";
            }
            cout<<endl;
        }
    }
}
int main()
{
    int arr[4]={2,6,1,3};
    subarrays(arr,4);
    return 0;
}
