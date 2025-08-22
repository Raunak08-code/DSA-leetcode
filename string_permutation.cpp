#include<iostream>
#include<string>
using namespace std;

// void per_string(string str, int n){
//     string s1="";
//     if(n==0) cout<<s1<<endl;
    

//     for(int i=0; i<=n-1; i++){
//         if(i==0){
//              s1 += str[i];
//              str= str[i+1]+str[i+2];
//         }
//         else if(i==n-1){ 
//             s1 += str[i];
//             str= str[i-1]+str[i-2];
//         }
//         else{
//             s1 += str[i];
//             str= str[i-1]+str[i+1];
//         }
//     }
//     per_string(str,n-1);
// }

// int main(){
//     string str= "abc";
//     int n= str.length();
//     per_string(str,n);
// }

void per_string(string ans, string str){
    if(str==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0; i<str.length(); i++){
        char ch= str[i];
        string left = str.substr(0,i);
        string right =str.substr(i+1);
        per_string(ans+ch,left+right);
    }

}

int main(){
    string str="abc";
    per_string("",str);
}