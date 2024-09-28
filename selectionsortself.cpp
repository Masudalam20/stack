#include<iostream>
using namespace std;

void selectionsort(int arr[],int n)
{
   int swapcount=0;
    for(int i=0;i<n-1;i++)
    {
        int m=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[m])
            {
                m=j;
            }
        }

        int temp=arr[m];
        arr[m]=arr[i];
        arr[i]=temp;
        swapcount++;

    }
    cout<<"total swaps: "<<swapcount<<endl;
}


int main()
{
    int n=5;
    int arr[n]={5,4,3,2,1};
    selectionsort( arr, n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
