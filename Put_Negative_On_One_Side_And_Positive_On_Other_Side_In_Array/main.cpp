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
void separate(Array *arr)
{
    int i=0,j=arr->length-1;
    while(i<j)
    {
        while(arr->A[i]<0)
        {
            i++;
        }
        while(arr->A[j]>0)
        {
            j--;
        }
        if(i<j)
        {
            Swap(&arr->A[i],&arr->A[j]);
        }
    }
}
void Display(Array arr)
{
    cout<<"Elements of the array after separating +ve and -ve"<<endl;
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
    separate(&arr1);
    Display(arr1);
    return 0;
}
