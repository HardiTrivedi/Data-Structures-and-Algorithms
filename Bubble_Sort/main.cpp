#include <iostream>

using namespace std;

void Swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void bubble_sort(int arr[], int n) //pushing the bigger elements at the end to perform this type of sort
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++) //for every iteration, the number of elements sorted at the end is equal to the number of iterations performed till now
                            //so we only iterate till n-1-i
        {
            if(arr[j]>arr[j+1])
            {
                Swap(&arr[j],&arr[j+1]);
            }
        }
    }
}
int main()
{
    int A[]={2,6,1,3};
    bubble_sort(A,4);
    for(int i=0;i<4;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
