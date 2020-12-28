#include <iostream>

using namespace std;

int main()
{
    int a=10,*p,arr[5]={1,2,3,4,5},*q;
    p=&a;
    cout<<"Data of variable a "<<a<<endl;
    cout<<"Address of variable a "<<&a<<endl;
    cout<<"Address where pointer p is pointing "<<p<<endl;
    cout<<"Data of the variable where pointer p is pointing "<<*p<<endl;

    q=arr;
    cout<<"Data of arr ";
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Address of arr "<<&arr<<endl;
    cout<<"Data of the variable where pointer q is pointing ";
    for(int i=0;i<5;i++)
    {
        cout<<*q<<endl;
    }
    cout<<"Address where pointer p is pointing "<<q<<endl;
    cout<<"Data of arr using q ";
    for(int i=0;i<5;i++)
    {
        cout<<q[i]<<endl;
    }
    return 0;
}
