#include <iostream>

using namespace std;

class Array
{
public:
    int *A;
    int Size;
    int length;
};

void Insert(Array *arr, int x)
{
    int i=arr->length-1;
    while(arr->A[i]>x) //while element at index i is greater than x, keep on shifting elements by one space to the right
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
}
void Display(Array arr)
{
    cout<<"Elements of the array "<<endl;
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
    Insert(&arr1, 2);
    Display(arr1);
    return 0;
}
