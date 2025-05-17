#include<iostream>
using namespace std;
int rec_fun(int n){
    int sum=0;
    if(n==0) return 0;  //that 0 not 1 couz 1 will be add in ultimate result 
     sum= n+rec_fun(n-1);
    return sum;
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    cout<<rec_fun(n);

}