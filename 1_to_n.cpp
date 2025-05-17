#include<iostream>
using namespace std;
int ont_to_n(int x, int n){
    if(x>n) return 1;
    cout<<x<<endl;
    ont_to_n(x+1,n);
}
int main(){
    int n,x=1;
    cout<<"Enter n: ";
    cin>>n;
    ont_to_n(x,n);
}