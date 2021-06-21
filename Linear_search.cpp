#include<iostream>
using namespace std;

int findLinear(int arr[],int n,int tar){
    for(int i=0;i<=n-1;i++)
    {
        if(arr[i]==tar)
        {
            return i;
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
    int t=findLinear(arr,n,target);
    if(t==-1)
    {
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at : "<<t<<endl;
    }
}