#include<iostream>
#include<vector>
using namespace std;

void arr_sub(vector<int>& arr1, vector<int> arr2, int idx){
    int n =arr1.size();
    if(idx==n){
        for(int i=0; i<arr2.size(); i++)
            cout<<arr2[i]<<" ";
        cout<<endl;
        return;
    } 
    arr_sub(arr1,arr2,idx+1);
    arr2.push_back(arr1[idx]);
    arr_sub(arr1,arr2,idx+1);
}

int main(){
    vector<int> a;
        a.push_back(1);
        a.push_back(2);
        a.push_back(3);

    vector<int> b;
    arr_sub(a,b,0);
    
}