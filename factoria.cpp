#include<iostream>
using namespace std;

int facto(int n){
    // int fact=1;
    if(n==1 || n==0) return 1;
    int ans=n*facto(n-1); //function calling itself 
    return ans;
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<facto(n);         //faction calling 
}