#include<iostream>
#include<vector>
using namespace std;

// void sub_sequence(int arr[], int n, int idx, vector<int> ans){
        
// }
void arr_sub(vector<int>& arr1, vector<int> arr2, int idx,int k){
    int n =arr1.size();
    if(idx==n){
        if(arr2.size()==k){
            for(int i=0; i<arr2.size(); i++){
                 cout<<arr2[i]<<" ";
            }
            cout<<endl;
        }

        return;
    } 
    if(arr2.size()+(n-idx)<k) return;
    arr_sub(arr1,arr2,idx+1,k);
    arr2.push_back(arr1[idx]);
    arr_sub(arr1,arr2,idx+1,k);
}

int main(){
     vector<int> a;
        a.push_back(1);
        a.push_back(2);
        a.push_back(3);
        a.push_back(4);
        a.push_back(5);

    vector<int> b;
    int k = 3;
    arr_sub(a,b,0,k);

}