#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"enter string: ";
    getline(cin,str);
    int n=str.size();
    int count=0;
    for(int i=0; i<n; i++){
        if(n==1){
            cout<<count;
            break;
        }
        if(i==0){
            if(str[i]!=str[i+1]) count++;
        }
        else if(i==n-1){
            if(str[i]!=str[i-1]) count++;
        }
        else if(str[i]!=str[i+1] || str[i-1]!=str[i])    count++; 
    }
    cout<<count;
}