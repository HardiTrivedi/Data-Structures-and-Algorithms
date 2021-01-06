#include <iostream>

using namespace std;

class Array
{
public:
    int *A;
    int Size;
    int length;

};
void Swap(int *x, int *y)
{   int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int LinearSearch(Array *arr, int key) //now as we will have to modify the array by swapping, we call by address
{
    for(int i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            Swap(&arr->A[i], &arr->A[0]);
            return 0;
        }
    }
    return -1;
}
void Display(Array arr)
{
    cout<<"Size of the array is "<<arr.Size<<endl;
    cout<<"Length of the array is "<<arr.length<<endl;
    cout<<"Elements of the array are "<<endl;
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<endl;
    }
}
int main()
{
    Array arr1;
    int s,n,k;
    cout<<"Enter the size of the array ";
    cin>>s;
    arr1.Size=s;
    arr1.A=new int[s];
    arr1.length=0;
    cout<<"Enter the number of elements in the array "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr1.A[i];
    }
    arr1.length=n;
    cout<<"Enter the element to be searched ";
    cin>>k;
    cout<<"Element "<<k<<" found at index "<<LinearSearch(&arr1, k)<<endl;
    Display(arr1);
    return 0;
}
