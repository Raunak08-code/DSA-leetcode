#include<iostream>
using namespace std;
int rec_power(int x, int n){
    if(n==0) return 1;
    int ans=1;
    if(n%2==0){
        ans=rec_power(x,n/2);
        return ans*ans;
    }
    else{
        ans = rec_power(x,n/2);
        return ans*ans*x;
    }

}
int main(){
    int x,n;
    cout<<"Enter base x: ";
    cin>>x;
    cout<<"Enter power n: ";
    cin>>n;

    cout<<rec_power(x,n);
}