#include <iostream>

using namespace std;

int c;
void TOH(int n, int A, int B, int C) //number of disks, from where(A-tower number say,1), using what(B-tower number say,2), to where(C-tower number say, 3)
{
    if(n>0)
    {
        TOH(n-1, A, C, B);
        cout<<"Move disk from "<<A<<" to "<<C<<endl;
        TOH(n-1, B, A, C);
        c++;
    }
}
int main()
{
    TOH(64,1,2,3);
    cout<<"Number of moves taken "<<c<<endl;
    return 0;
}
