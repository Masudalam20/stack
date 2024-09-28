#include<iostream>
using namespace std;

void bubble( int arr[],int n){
  int swapcount=0;

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]> arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapcount++;
            }
        }
    }
    cout<<"total swap:"<<swapcount<<endl;

}

int main()

{
    int n=5;
    int arr[n]={5,4,3,2,1};
    bubble(arr, n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<< " ";

    }

return 0;
}
