#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    arr[0]=2;
    arr[1]=4;
    arr[2]=6;
    arr[3]=8;
    arr[4]=10;
    int A[5]={1,2,3,4,5};
    //can also be written as
    //int A[]={1,2,3,4,5};
    cout<<"Size of arr "<<sizeof(arr)<<endl;
    cout<<"Size of A "<<sizeof(A)<<endl;
    cout<<"Elements of arr ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Elements of A ";
    for(int i=0;i<5;i++)
    {
        cout<<A[i]<<endl;
    }
    cout<<"Elements of arr using for each loop ";
    for(auto &x:arr)
    {
        cout<<x<<endl;
    }
    return 0;
}
