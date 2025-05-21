#include<iostream>
using namespace std;
void max_(int arr[], int n, int idx,int maxi){
    if(idx==n){
        cout<<maxi; 
        return;
    }
    if(maxi<arr[idx]) maxi=arr[idx];
    max_(arr,n,idx+1,maxi);
}

int maxxi(int arr[], int n, int idx){
    if(idx==n) return INT16_MIN;
    return max(arr[idx],maxxi(arr,n,idx+1));
}
int main(){
    int arr[]={4,6,7,21,8,9,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    // max_(arr,n,0,INT16_MIN);
    cout<<maxxi(arr,n,0);
}