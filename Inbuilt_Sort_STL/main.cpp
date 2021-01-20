#include <iostream>
#include <algorithm>>

using namespace std;

bool compare(int a, int b)
{
    return a<b; //for decreasing order sorting, return a>b
}
int main()
{
    int A[]={2,6,1,3};
    sort(A,A+4,compare); //We consider A is start index, A+4 is end index
    for(int i=0;i<4;i++)
    {
        cout<<A[i]<<" ";
    }
    return 0;
}
