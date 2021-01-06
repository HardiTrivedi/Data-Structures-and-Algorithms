#include <iostream>

using namespace std;

class Array
{
public:
    int *A;
    int Size;
    int length;
};
int LinearSearch(Array arr, int key) //now as we do not have to modify the array, we call by value
{
    for(int i=0;i<arr.length;i++)
    {
        if(key==arr.A[i])
        {
            return i;
        }
    }
    return -1; //return -1 if key is not present in the array
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
    cout<<"Element "<<k<<" found at index "<<LinearSearch(arr1, k)<<endl;
    return 0;
}
