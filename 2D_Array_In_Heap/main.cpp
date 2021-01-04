#include <iostream>

using namespace std;

int main()
{
    int *A[3]; //this array of pointer is created in stack
    A[0]=new int[4]; //this actual array is created in heap
    A[1]=new int[4]; //this actual array is created in heap
    A[2]=new int[4]; //this actual array is created in heap
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            A[i][j]=i+j;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    //to create both array of pointer and actual array in heap
    /*int **A; //this pointer is created in stack
    A=new int*[3]; //this array of pointer is created in heap
    A[0]=new int[4]; //this actual array is created in heap
    A[1]=new int[4]; //this actual array is created in heap
    A[2]=new int[4]; //this actual array is created in heap
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            A[i][j]=i+j;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }*/
    return 0;
}
