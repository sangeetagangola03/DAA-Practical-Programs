#include<iostream>
#include<algorithm>
using namespace std;

int findBinary(int arr[],int n,int tar)
{
    int s=0,e=n-1,mid;
    while(s<=e)
    {
        mid=s+(e-s)/2;
        if(arr[mid]==tar)
        {
            return mid;
        }
        else if(arr[mid]<tar)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;
    sort(arr,arr+n);
    int t=findBinary(arr,n,target);
    if(t==-1)
    {
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found"<<endl;
    }
}