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
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
void Display(Array arr)
{
    cout<<"Elements of the array after reversing the array "<<endl;
    for(int i=0;i<arr.length;i++)
    {
        cout<<arr.A[i]<<endl;
    }
}
int main()
{
    Array arr1;
    int s,n;
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
    for(int i=0,j=n-1;i<j;i++,j--) //swap the corresponding elements from first and last till i<j
    {
        Swap(&arr1.A[i],&arr1.A[j]);
    }
    Display(arr1);
    return 0;
}
