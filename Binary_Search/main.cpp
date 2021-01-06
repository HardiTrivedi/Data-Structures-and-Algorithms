#include <iostream>

using namespace std;

class Array
{
public:
    int *A;
    int Size;
    int length;
};
int BinarySearch(Array arr, int key)
{
    int l=0,h=arr.length-1,mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
        {
            return mid;
        }
        else if(key>arr.A[mid])
        {
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    return -1; //element not found

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
    cout<<"Element "<<k<<" found at index "<<BinarySearch(arr1, k)<<endl;
    return 0;
}
