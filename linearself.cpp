#include<iostream>
using namespace std;
int linearsearch(int arr[],int n,int target)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==target)
            return i;
    }
    return -1;
}
int main()
{
    int target;
    int n;
    cout<<"enter the number of elements"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter elements:"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];

        cout<<"enter target:"<<endl;
        cin>>target;

        int result=linearsearch(arr,n,target);
        if(result !=-1)
            cout<<"target index is:"<<result<<endl;
        else
            cout<<"not found"<<endl;

        return 0;
}
