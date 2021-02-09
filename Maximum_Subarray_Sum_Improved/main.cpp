#include <iostream>

using namespace std;

int subarrays_sum_improved(int A[], int n)
{
    int i;
    int current_sum=A[0];
    int max_sum=A[0];
    for(i=0;i<n;i++)
    {
        current_sum=max(A[i],current_sum+A[i]);
        max_sum=max(current_sum,max_sum);
        if(current_sum<0)
        {
            current_sum=0;
        }
    }
    return max_sum;
}
int main()
{
    int arr[]={-2,1,-3,4,-1,2,1,-5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum sum is "<<subarrays_sum_improved(arr,n)<<endl;
    return 0;
}
