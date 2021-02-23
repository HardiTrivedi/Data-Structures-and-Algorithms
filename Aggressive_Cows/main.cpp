#include <iostream>

using namespace std;

bool CanCowsBePlaced(int stalls[],int n,int c,int separation)
{
    int Cow=stalls[0]; //first cow at stall 1 - 0th index
    int Count=1;
    for(int i=1;i<n;i++)
    {
        if(stalls[i]-Cow>=separation)
        {
            Cow=stalls[i];
            Count++;
            if(Count==c)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int stalls[]={1,2,4,8,9},n=5,c=3,out=0,mid;
    int l=0;
    int h=stalls[n-1]-stalls[0];
    while(l<=h)
    {
        mid=(l+h)/2;
        bool PlacingCows=CanCowsBePlaced(stalls,n,c,mid);
        if(PlacingCows)
        {
            out=mid;
            l=mid+1;
        }
        else
        {
            h=mid-1;
        }
    }
    cout<<out<<endl;
    return 0;
}
