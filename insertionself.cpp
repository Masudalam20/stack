#include<iostream>
using namespace std;
void insertion(int arr[],int n)
{
    int swapcount=0;
    for(int i=1;i<n;i++)
    {
        int m=arr[i];
        int j;
        for(j=i-1;j>=0 && arr[j]>m;j--)
        {
            arr[j+1]=arr[j];
            swapcount++;
        }
        arr[j+1]=m;
    }
    cout<<"total swaps :"<<swapcount<<endl;
}

int main()
{
    int n=5;
    int arr[n]={5,4,2,3,1};
    insertion(arr, n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
