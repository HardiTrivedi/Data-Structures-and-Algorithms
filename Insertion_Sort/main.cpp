#include <iostream>

using namespace std;

void insertion_sort(int arr[], int n) //pushing the bigger elements at the end to perform this type of sort
{
    int i,j,x;
    for(i=1;i<n-1;i++)
    {
        x=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }

}
int main()
{
    int A[]={2,6,1,3};
    insertion_sort(A,4);
    for(int i=0;i<4;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
