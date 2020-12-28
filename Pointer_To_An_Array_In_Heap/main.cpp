#include <iostream>

using namespace std;

int main()
{
    int arr[5]={1,2,3,4,5},*p;
    p=new int[5];
    cout<<"Enter the elements of the array ";
    for(int i=0;i<5;i++)
    {
        cin>>p[i];
    }
    cout<<"Array created in heap ";
    for(int i=0;i<5;i++)
    {
        cout<<p[i]<<endl;
    }
    delete []p;
    p=nullptr;
    cout<<"Array deleted "<<endl;
    return 0;
}
