#include<iostream>
#include<string>
using namespace std;
// void stri(string ans,string str){
//     if(str.size()==0){
//         cout<<ans;
//         return;
//     }
//     char ch=str[0];
//     if(ch=='a') stri(ans,str.substr(1));
//     else stri(ans+ch,str.substr(1));
// }
void stri(string ans,string str,int idx){
    if(idx==str.size()){
        cout<<ans;
        return;
    }
    char ch=str[idx];
    if(ch=='a') stri(ans,str,idx+1);
    else stri(ans+ch,str,idx+1);
}
int main(){
    string str="raunak ";
    stri("",str,0);
}