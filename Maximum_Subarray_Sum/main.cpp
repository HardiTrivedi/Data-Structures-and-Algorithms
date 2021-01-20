#include <iostream>

using namespace std;

void subarrays_sum(int A[], int n)
{
    int i,j,k,left,right;
    int current_sum=0;
    int max_sum=0;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            current_sum=0;
            for(k=i;k<=j;k++)
            {
                //cout<<A[k]<<",";
                current_sum=current_sum+A[k];
            }
            cout<<current_sum;
            cout<<endl;
            if(current_sum>max_sum)
            {
                max_sum=current_sum;
                left=i;
                right=j;
            }
        }
    }
    cout<<endl;
    cout<<"Maximum sum is "<<max_sum<<" for the subarray "<<endl;
    for(int k=left;k<=right;k++)
    {
        cout<<A[k]<<",";
    }
    cout<<endl;
}
int main()
{
    int arr[4]={2,6,1,3};
    subarrays_sum(arr,4);
    return 0;
}
