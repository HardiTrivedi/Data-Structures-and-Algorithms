#include <iostream>

using namespace std;

class Array
{
public:
    int *A;
    int Size;
    int length;
};
int Get(Array arr, int Index)
{
    for(int i=0;i<arr.length;i++)
    {
        if(Index>=0&&Index<=arr.length-1)
        {
            return arr.A[Index];
        }
    }
    return -1;
}
void Set(Array *arr, int Index, int x)
{
    for(int i=0;i<arr->length;i++)
    {
        if(Index>=0&&Index<=arr->length-1)
        {
            arr->A[Index]=x;
        }
    }
}
int Maximum(Array arr)
{
    int Max=arr.A[0];
    for(int i=0;i<arr.length;i++)
    {
        if(arr.A[i]>Max)
        {
            Max=arr.A[i];
        }
    }
    return Max;
}
int Minimum(Array arr)
{
    int Min=arr.A[0];
    for(int i=0;i<arr.length;i++)
    {
        if(arr.A[i]<Min)
        {
            Min=arr.A[i];
        }
    }
    return Min;
}
int Sum(Array arr, int num)
{
    if(num>=0)
    {
        return arr.A[num]+Sum(arr,num-1);
    }
    else
    {
        return 0;
    }
}
float Avg(Array arr, int num)
{
    if(num>=0)
    {
        return (float)(arr.A[num]+Sum(arr,num-1))/num;
    }
    else
    {
        return 0;
    }
}
int main()
{
    Array arr1;
    int s,n,index,index1,e;
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
    cout<<"Enter a index to find element at the same ";
    cin>>index;
    cout<<"Element at index "<<index<<" is "<<Get(arr1,index)<<endl;
    cout<<"Enter at what index you want to replace element ";
    cin>>index1;
    cout<<"Enter the element to be replaced ";
    cin>>e;
    Set(&arr1, index1, e);
    cout<<"Elements of the array after replacing are "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr1.A[i]<<endl;
    }
    cout<<"Maximum element in the array is "<<Maximum(arr1)<<endl;
    cout<<"Minimum element in the array is "<<Minimum(arr1)<<endl;
    cout<<"Sum of all elements in the array "<<Sum(arr1,n)<<endl;
    cout<<"Average of all elements in the array "<<Avg(arr1,n)<<endl;
    return 0;
}
