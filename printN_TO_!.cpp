#include<iostream>
using namespace std;
int n_to_1(int n){
    if(n==0) return 1;
    cout<<n<<endl;
    n_to_1(n-1);
}
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    n_to_1(n);
}