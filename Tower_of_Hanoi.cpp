#include<iostream>
using namespace std;

void ToH(char S,char H,char D, int n){
    if(n==0) return;
    ToH(S,D,H,n-1);
    cout<<S<<"->"<<D<<endl;
    ToH(H,S,D,n-1);
}

int main(){
    int n=3;
    ToH('A','B','C',n);
}