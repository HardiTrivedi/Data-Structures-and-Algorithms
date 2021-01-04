#include <iostream>

using namespace std;

int main()
{
    int *p;
    p=new int[5];
    for(int i=0;i<5;i++)
    {
        p[i]=i;
    }
    int *q;
    q=new int[10];
    for(int i=0;i<5;i++)
    {
        q[i]=p[i]; //copy all elements from p to q
    }
    delete []p; //delete array of p
    p=q; //make pointer p point where p is pointing
    q=nullptr; //make q not to point that array as now p is pointing the same
    p[5]=5; //adding one more element in p after increasing size
    cout<<"Elements in p now "<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<p[i]<<endl;
    }
    return 0;
}
