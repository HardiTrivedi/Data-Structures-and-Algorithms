#include <iostream>

using namespace std;

int main()
{
    int arr1[5]={2,4,6,8,10};
    int arr2[5]={2,4};
    int arr3[5]={0};
    int arr4[]={2,4,6,8,10};
    cout<<"Element at index 2 in array 1 "<<arr1[2]<<endl; //way of accessing element at particular index
    cout<<"Element at index 2 in array 2 "<<2[arr2]<<endl; //another way of accessing element at particular index
    cout<<"Element at index 2 in array 3 "<<*(arr3+2)<<endl; //another way of accessing element at particular index
    cout<<"Array 1 "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr1[i]<<endl;
    }
    cout<<"Array 2 "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr2[i]<<endl;
    }
    cout<<"Array 3 "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr3[i]<<endl;
    }
    cout<<"Array 4 "<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr4[i]<<endl;
    }
    return 0;
}
