#include <iostream>

using namespace std;

class Array
{
public:
    int *A;
    int Size;
    int length;
};
bool isSorted(Array arr, int n)
{
    for(int i=0;i<n-1;i++) //compare elements to check if i is less that i+1
    {
        if(arr.A[i]>arr.A[i+1])
        {
            return false; //return false(0) when this is the condition
        }
    }
    return true; //return true(1) when this is the condition
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
    cout<<"Is the array sorted? "<<isSorted(arr1, n)<<endl;
    return 0;
}
