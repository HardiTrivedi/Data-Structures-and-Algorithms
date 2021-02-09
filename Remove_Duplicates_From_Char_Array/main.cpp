#include <iostream>

using namespace std;

void Array(char arr[], int n)
{
    int i=0,j;
    for(j=1;j<n;j++)
    {
        if(arr[i]!=arr[j])
        {
            i++;
            arr[i]=arr[j];
        }
    }
    arr[i+1]='\0';
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    char A[5]={'h','h','a','a','\0'};
    Array(A,5);
    return 0;
}
