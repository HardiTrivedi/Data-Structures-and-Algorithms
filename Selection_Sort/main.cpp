#include <iostream>

using namespace std;

void Swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void selection_sort(int arr[], int n)
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                Swap(&arr[i],&arr[j]);

            }
        }
    }
}
int main()
{
    int A[]={2,6,1,3};
    selection_sort(A,4);
    for(int i=0;i<4;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
