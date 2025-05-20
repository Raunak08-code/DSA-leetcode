#include<iostream>
using namespace std;
void trev(int arr[],int n,int idx){
    if(idx==n) return;
    cout<<arr[idx]<<" ";
    trev(arr,n,idx+1);
}
int main(){
    int arr[]={1,2,3,4,5,0,6,4,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    trev(arr,n,0);
}