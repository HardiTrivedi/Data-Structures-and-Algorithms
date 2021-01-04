#include <iostream>

using namespace std;

class Array
{
public:
    int *A;
    int Size;
    int length;
};
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
void append(Array *arr, int x) //we want to modify the array so we make it call by address type. x is the element to be inserted
{
    if(arr->length<arr->Size) //if arr.length is less than arr.size, there is a free space available to insert the array we use -> as arr is pointer
    {
        arr->A[arr->length]=x; //insert element at the last index
        arr->length++; //increment the length now
    }
    cout<<"Elements of the array after appending are "<<endl;
    for(int i=0;i<arr->length;i++)
    {
        cout<<arr->A[i]<<endl;
    }
}
void Insert(Array *arr, int index, int x) //we want to modify the array so we make it call by address type. index at which x (the element) is to be inserted.
{
    if(index>=0&&index<=arr->length)
    {
        for(int i=arr->length;i>index;i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
    cout<<"Elements of the array after inserting are "<<endl;
    for(int i=0;i<arr->length;i++)
    {
        cout<<arr->A[i]<<endl;
    }
}
void Delete(Array *arr, int index)
{
    if(index>=0&&index<=arr->length)
    {
        for(int i=index;i<arr->length-1;i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
    }
    cout<<"Elements of the array after deleting are "<<endl;
    for(int i=0;i<arr->length;i++)
    {
        cout<<arr->A[i]<<endl;
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
    Display(arr1);
    append(&arr1, 4);
    Insert(&arr1, 1, 2);
    Delete(&arr1, 2);
    return 0;
}
